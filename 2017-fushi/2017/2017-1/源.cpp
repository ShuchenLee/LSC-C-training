/*ʹ���ַ�����洢һ���ַ����ж��Ƿ��ǻ����ַ�������Ҫ�жϲ����Կո�*/
#include<iostream>
#include<string>
using namespace std;

bool huiwen(char s[]);

int main()
{
	char s[100];
	cin.getline(s, 100);
	if (huiwen(s))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}

bool huiwen(char s[])
{
	int len = strlen(s);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		if (s[left] == ' ')
			left++;
		if (s[right] == ' ')
			right--;
		if (s[left] != s[right])
			return false;
		left++;
		right--;
	}
	return true;
}