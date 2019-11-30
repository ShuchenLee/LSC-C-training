#include <iostream>
#include <cmath>
using namespace std;

const int len = 200;
class HugeInt
{
public:
	//���캯��
	HugeInt(int R);
	HugeInt() {};

	//�ӷ��ӿ�
	HugeInt operator +(HugeInt &R);

	//����ӿ�
	void Print();

	//���ýӿ�
	int Len() { return m_len; }
private:
	int m_sign;    //����
	int m_len;    //����
	char m_num[len];  //�洢�ռ�
};

void HugeInt::Print()
{
	int i;
	for (i = m_len;i != 0;i--)
		cout << m_num[i] + 0;
	cout << endl;
}

HugeInt::HugeInt(int R)
{
	if (R != 0)
	{
		if (R>0)
			m_sign = 1;
		else
			m_sign = -1;
		int i = 0, k = 1;
		int abs_R = abs(R);
		do
		{
			i++;
			m_num[i] = abs_R % 10;
			abs_R /= 10;
		} while (abs_R);
		m_len = i;
	}
	else
	{
		m_num[1] = 0;
		m_len = 1;
		m_sign = 0;
	}
}

HugeInt HugeInt::operator +(HugeInt &R)
{
	HugeInt Result(0);
	char *p, *q, *r;
	p = q = r = NULL;
	int len1, len2;
	if (Len()>R.Len())
	{
		p = this->m_num;
		q = R.m_num;
		r = Result.m_num;
		len1 = Len();
		len2 = R.Len();
	}
	else
	{
		p = R.m_num;
		q = this->m_num;
		r = Result.m_num;
		len1 = R.Len();
		len2 = Len();
	}
	int i = 1, j = 1, k = 1, carry = 0;

	while (j <= len2)
	{
		r[k] = p[i++] + q[j++] + carry;
		carry = r[k] / 10;
		r[k] %= 10;
		k++;
	}
	while (i <= len1)
	{
		r[k] = p[i++] + carry;
		carry = r[k] / 10;
		r[k] %= 10;
		k++;
	}
	if (carry>0)
	{
		r[k] = carry;
		Result.m_len = k;
	}
	else
	{
		Result.m_len = k - 1;
	}
	Result.m_sign = 1;
	return Result;
}

int main()
{
	HugeInt h1(99999), h2(99999), h3(0);
	h3 = h1 + h2;
	h3.Print();
	return 0;
}