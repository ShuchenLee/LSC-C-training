#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "请输入要相除前几个数n（n在1-10之间）：";
	cin >> n;

	float a[10], b[10];
	cout << "请输入数组a的元素：";
	for (int i = 0;i < 10;i++) {
		cin >> a[i];
	}

	cout << "请输入数组b的元素：";
	for (int i = 0;i < 10;i++) {
		cin >> b[i];
	}

	for (int i = 0;i < n;i++) {
		a[i] = a[i] / b[i];
	}

	cout << "执行数组相除……，结果存于数组a中，此时数组a的前n个结果为：" << endl;
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}



}