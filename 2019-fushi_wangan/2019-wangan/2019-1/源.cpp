/*��1-20000֮���ͬ������
������n������ƽ������β�������nΪͬ���������磺5��ƽ������25����5������25���Ҳ࣬��ô5����һ��ͬ������ */

#include<iostream>
#include<cmath>
using namespace std;

int fun(int i)//�ж�һ�������Ǽ�λ��
{
	if (i / 10 == 0)
		return 1;
	else if (i / 100 == 0)
		return 2;
	else if (i / 1000 == 0)
		return 3;
	else if (i / 10000 == 0)
		return 4;
	else if (i / 100000 == 0)
		return 5;
	else
		return -1;
}
int main()
{
	int num;
	int temp;
	for (int i = 1;i <= 20000;i++)
	{
		num = fun(i);//�ж�i�Ǽ�λ��
		temp = pow(10, num);
		if ((i*i) % temp == i)
			cout << i << "*" << i << " = " << i*i<<endl;
	}
}