/*��д������������Ĺ�ʾ����е�ֵ��Ҫ��С������λ��Ϊ������ɱ������Χ
��= 4 - 4/3 + 4/5 - 4/7 + 4/9 -��*/

#include<iostream>
using namespace std;

int main()
{
	int pause;
	int size = sizeof(double) * 8;//doubleռ���ֽ���*8��Ϊ����λ��  2^����λ���η���Ϊ�ɱ�ʾ�����Χ
	double Pi = 0,temp = 4.0;
	int sign = -1;
	for (int i = 1;fabs(temp) >= pow(2.0, -1 * size);i += 2)
	{
		temp = 4.0 / i;
		sign = sign*(-1);
		temp = temp*sign;
		cout << temp << endl;
		Pi = Pi + temp;
		cin >> pause;
	}

	cout << Pi << endl;
}