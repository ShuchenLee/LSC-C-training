/*求1-20000之间的同构数。
正整数n若是它平方数的尾部，则称n为同构数。例如：5的平方数是25，且5出现在25的右侧，那么5就是一个同构数。 */

#include<iostream>
#include<cmath>
using namespace std;

int fun(int i)//判断一个整数是几位数
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
		num = fun(i);//判断i是几位数
		temp = pow(10, num);
		if ((i*i) % temp == i)
			cout << i << "*" << i << " = " << i*i<<endl;
	}
}