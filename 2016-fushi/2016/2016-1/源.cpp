/*�ü�������һ���ı�����that is a question����дһ��test�������������ı��ĵ��ʺͶ�Ӧ�ĵ��ʳ������������У���
�����·�ʽ���
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
		word = s.substr(0, s.find(" "));//substr����ַ����дӵ�0λ��ʼ�ĳ���Ϊs.find(" ")���ַ���
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