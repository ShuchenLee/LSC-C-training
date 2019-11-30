/*寻找1-1000中所有满足以下条件的数：所有因子（包括1但不包括本身）之和等于这个数本身。并将所有这样的
数输出，格式如下：6=1+2+3*/
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