#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "������Ҫ���ǰ������n��n��1-10֮�䣩��";
	cin >> n;

	float a[10], b[10];
	cout << "����������a��Ԫ�أ�";
	for (int i = 0;i < 10;i++) {
		cin >> a[i];
	}

	cout << "����������b��Ԫ�أ�";
	for (int i = 0;i < 10;i++) {
		cin >> b[i];
	}

	for (int i = 0;i < n;i++) {
		a[i] = a[i] / b[i];
	}

	cout << "ִ��������������������������a�У���ʱ����a��ǰn�����Ϊ��" << endl;
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}



}