/*��10-100000֮���������10�������ŵ�int�����У��ٰ���������е�ÿ��Ԫ�ض�ת�����ַ����浽�ַ�ָ�������У�
fun2ʵ�ְ�һ������ת����һ���ַ���*/

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

char fun2(int a,char str[])
{
	string s="";
	
	s = s+to_string(a);
	
	strcpy(str, s.c_str());
	int len = strlen(str);
	/*int len = strlen(str);
	for (int i = 0;i < len;i++)
		cout << str[i];*/
	return str[len];
	
}

int main()
{
	int inter[10];
	char ch[10];
	
	srand(time(0));
	for (int i = 0;i < 10;i++)
	{
		inter[i] = rand() % (100000 - 10 + 1) + 10;
		cout << inter[i] << " ";
		ch[10]=fun2(inter[i],ch);
		for (int j = 0;j < strlen(ch);j++)
			cout << ch[j];
		cout << endl;
	}
	cout << endl;
	/*for (int i = 0;i < 10;i++)
	{
		cout << ch[i] << " ";
	}
	cout << endl;*/
	return 0;
}