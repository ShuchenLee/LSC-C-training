/*编写一个程序，利用下面的公示计算e^x的值，精确的10^-10次方*/
#include<iostream>

using namespace std;

int main()
{
	double x, temp = 1, sum = 1;
	cout << "请输入指数x：";
	cin >> x;

	for (int i = 1;fabs(temp) >= 10e-10;i++)
	{
		temp = temp*x / i;
		sum += temp;
	}

	cout << "e^" << x << "次方的结果为：" << sum << endl;
}