/*��дһ��������������Ĺ�ʾ����e^x��ֵ����ȷ��10^-10�η�*/
#include<iostream>

using namespace std;

int main()
{
	double x, temp = 1, sum = 1;
	cout << "������ָ��x��";
	cin >> x;

	for (int i = 1;fabs(temp) >= 10e-10;i++)
	{
		temp = temp*x / i;
		sum += temp;
	}

	cout << "e^" << x << "�η��Ľ��Ϊ��" << sum << endl;
}