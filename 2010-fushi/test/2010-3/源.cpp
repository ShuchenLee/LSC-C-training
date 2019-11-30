/*文件中有类似的一行字符串"(010)(15012345678)|123|(430070)",按以下格式输出："区号|电话号码|城市编号|邮编"*/
#include<iostream>
#include<fstream>
#include<istream>
#include<string>
using namespace std;

void print(char *str, int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << str[i];
	}
	cout << "|";
}

int main()
{
	char temp[100];
	char *quhao;//区号
	char *telephone;//电话号码
	char *bianhao;//城市编号
	char *mail;//邮编

	ifstream inFile("input.txt", ios::in);
	if (!inFile)
	{
		cout << "The file cannot be opened.";
		exit(1);
	}
	inFile >> temp;
	cout << temp << endl;//在屏幕上把文件中的字符串输出
	
	
    //char* tokenPtr = strtok(temp, "(");

	for (int i = 1;i < 4;i++)
	{
		cout << temp[i];
	}
	cout << "|";//傻逼办法，以下省略

}