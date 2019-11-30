/*用键盘输入一行文本，如that is a question，编写一个test函数，将输入文本的单词和对应的单词长度输入数组中，并
像以下方式输出
that                4
is                  2
a                   1
question            8  */

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void test(string s)
{
	string word;
	while (!s.empty())
	{
		if (s.find(" ") == s.npos)
		{
			word = s.substr(0);
			cout << setw(20) << left << word << setw(8) << left << word.length() << endl;
			break;
		}
		word = s.substr(0, s.find(" "));//substr获得字符串中从第0位开始的长度为s.find(" ")的字符串
		cout << setw(20) << left << word << setw(8) << left << word.length() << endl;
		s.erase(0, s.find(" ") + 1);
	}
}

int main()
{
	
	string s;
	getline(cin, s);
	test(s);
	
	return 0;
}