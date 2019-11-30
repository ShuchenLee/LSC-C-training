#include<iostream>
using namespace std;

int add(int n) {
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++) 
		{
			sum += j;
		}
	}
	return sum;
}

int main() {
	int n;
	cout << "请输入正整数n：";
	cin >> n;
	int result;
	result = add(n);
	cout << "计算结果为：" << result << endl;
}

