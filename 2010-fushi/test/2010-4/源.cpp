/*设计一个多项式类Polynomial(包括构造函数、复制构造函数、析构函数、赋值函数、实现两个多项式相加*/
#include<iostream>
using namespace std;

class Polynomial {
public:
	Polynomial(const double *, int len);
	Polynomial(const Polynomial &p);
	~Polynomial();

	void setPolynomial(const double*);
	int getLength() const;
	void setLength(int);

	friend ostream &operator<<(ostream &output, const Polynomial &p2);
	Polynomial& operator + (Polynomial &p);
	
private:
	double *poly;//项的系数
	int length;//项数
};

Polynomial::Polynomial(const double *polyPtr, int len)
{
	length = len;
	setPolynomial(polyPtr);
}

Polynomial::Polynomial(const Polynomial &copy)
{
	length = copy.length;
	setPolynomial(copy.poly);
}

Polynomial::~Polynomial()
{
	delete[] poly;
}

int Polynomial::getLength()const
{
	return length;
}

void Polynomial::setLength(int len)
{
	length = len;
}

void Polynomial::setPolynomial(const double*p)
{
	poly = new double[length];
	for (int i = 0;i < length;i++)
		poly[i] = p[i];
}

Polynomial& Polynomial::operator+(Polynomial &p)
{
	int i;
	int sizes = (length > p.length ? length : p.length);
	double *tempPtr = new double[sizes];
	for (i = 0;i < length&&i < p.length;i++)
	{
		tempPtr[i] = poly[i] + p.poly[i];
	}

	if (length < p.length)
	{
		for (;i < p.length;i++)
			tempPtr[i] = p.poly[i];
	}
	else
	{
		for (;i < length;i++)
			tempPtr[i] = p.poly[i];
	}
	return *new Polynomial(tempPtr, sizes);
}

ostream &operator<<(ostream &output, const Polynomial &p2)
{
	for (int i = p2.length - 1;i > 0;i--)
	{
		if (p2.poly[i] != 0)
			output << p2.poly[i] << "*X^" << i << "+";
	}
	output << p2.poly[0] << endl;
	return output;
}

int main()
{
	double polys1[7] = { 1,2.3,4.0,5,6.7,8.9,1.9 };
	double polys2[3] = { 3.2,1.4,0 };
	Polynomial p2(polys2, 3);
	Polynomial p1(polys1, 7);
	cout << p1 << endl << p2 << endl;
	p2 = p2 + p1;
	cout << p2;
	
}