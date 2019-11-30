/*统计一条英文句子中字母的个数*/
#include<iostream>
#include<string>
using namespace std;

int NumberCount(string ch)
{
	int count = 0;
	for (int i = 0;i < ch.length();i++)
	{
		if (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z')
			count++;
	}
	return count;
}

int main()
{
	string str;
	getline(cin, str);
	int number;
	number = NumberCount(str);
	cout << "the num is " << number << endl;
}