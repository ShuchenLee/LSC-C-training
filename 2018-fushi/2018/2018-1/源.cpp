/*Ѱ��1-1000�������������������������������ӣ�����1������������֮�͵��������������������������
���������ʽ���£�6=1+2+3*/
#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int i, j;

	for (i = 1;i <= 1000;i++)
	{
		sum = 0;
		
		for (j = 1;j <= i/2 ;j++)
		{
			if (i%j == 0)
			{
				sum += j;
		
			}
		}
		if (i == sum)
		{
			cout << i << "= 1";
			for (j = 2;j <= i / 2;j++)
			{
				if (i%j == 0)
					cout << " + " << j;
			}
			cout << endl;
		}
	}
}