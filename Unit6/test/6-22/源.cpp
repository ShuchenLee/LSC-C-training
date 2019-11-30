#include <iostream>
#include <string>
using namespace std;

void reverse(string &str)
{
	int l = str.length();
	for (int i = 0;i<l / 2;i++)
	{
		char c = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = c;
	}
}

void main()
{
	string str;
	getline(cin, str);
	reverse(str);
	cout << str << endl;
}