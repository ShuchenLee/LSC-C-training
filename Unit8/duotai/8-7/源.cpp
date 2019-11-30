#include<iostream>
using namespace std;

class counter {
public:
	counter() { itsVal = 0; }
	counter(int val) { itsVal = val; }
	~counter(){}
	int getItsVal() const { return itsVal; }
	void setItsVal(int val) { itsVal = val; }
	const counter operator+ (const counter &);
private:
	int itsVal;
};

const counter counter::operator+ (const counter &rhs) {
	return counter(itsVal + rhs.getItsVal());
}

int main()
{
	counter one(2), two(4), three;
	three = one + two;
	cout << "three is : " << three.getItsVal() << endl;
}