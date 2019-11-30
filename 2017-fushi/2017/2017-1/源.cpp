/*使用字符数组存储一段字符，判断是否是回文字符串（需要判断并忽略空格*/
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