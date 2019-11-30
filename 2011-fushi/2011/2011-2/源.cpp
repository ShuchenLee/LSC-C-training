/*编写程序，利用下面的公示计算π的值，要求小数点后的位数为计算机可表达的最大范围
π= 4 - 4/3 + 4/5 - 4/7 + 4/9 -…*/

#include<iostream>
using namespace std;

int main()
{
	int pause;
	int size = sizeof(double) * 8;//double占的字节数*8即为比特位数  2^比特位数次方即为可表示的最大范围
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