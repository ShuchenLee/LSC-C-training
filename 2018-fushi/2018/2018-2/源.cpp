/*在10-100000之间随机产生10个数，放到int数组中，再把这个数组中的每个元素都转化成字符串存到字符指针数组中，
fun2实现把一个整数转化成一个字符串*/

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