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
	cout << "������������n��";
	cin >> n;
	int result;
	result = add(n);
	cout << "������Ϊ��" << result << endl;
}

