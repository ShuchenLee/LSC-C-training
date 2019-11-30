/*友元函数求最长公共单词*/
#include<iostream>
#include<fstream>
using namespace std;

const static int SIZE = 100;

class selfSring {
	friend void fun(const selfSring &, const selfSring &);
public:
	selfSring(ifstream &);
	virtual ~selfSring()
	{
		delete[] dataStr;
	}
private:
	char *dataStr;
	int length;
};

selfSring::selfSring(ifstream &input)
{
	char *temp = new char[SIZE];
	input.getline(temp, SIZE);
	length = strlen(temp);
	dataStr = new char[length];
	strcpy(dataStr, temp);
	delete[] temp;
}

void fun(const selfSring &str1, const selfSring &str2)
{
	char s1[100][20] = { "" };   //拆分str1[]句子，分解成单词保存在s1中
	char s2[100][20] = { "" };    //拆分str2[]句子，
	char tstr1[str1.length];
	char tstr2[str2.length];
	strcpy(tstr1, str1.dataStr);
	strcpy(tstr2, str2.dataStr);

	char *temp;                      //分解句子str1
	temp = strtok(tstr1, " .");
	int len1 = 0;
	while (temp)
	{
		strcpy(&s1[len1++][0], temp);
		temp = strtok(NULL, " .");
	}
	//分解句子str2
	temp = strtok(tstr2, " .");
	int len2 = 0;
	while (temp)
	{
		strcpy(&s2[len2][0], temp);
		len2++;
		temp = strtok(NULL, " .");
	}
	//保留公共单词
	size_t maxlen = 0, count = 0;
	char common[100][20] = { "" };
	char s[20];
	for (int i = 0; i <= len1; i++)     //小于等于长度
	{
		strcpy(s, &s1[i][0]);
		for (int j = 0; j <= len2; j++)  //小于等于长度
			if (strcmp(s, &s2[j][0]) == 0)
			{
				strcpy(&common[count++][0], s);
				if (maxlen < strlen(s))
					maxlen = strlen(s);
			}
	}
	//输出最长公共单词
	for (int i = 0; i <= count; i++)
	{
		if (strlen(&common[i][0]) == maxlen)
			cout << &common[i][0] << " ";
	}
	
}

int main()
{
	ifstream input("input.txt", ios::in);
	if (!input)
	{
		cerr << "file cannot be opened!!!" << endl;
		exit(1);
	}
	selfSring str1(input);
	selfSring str2(input);
	fun(str1, str2);
	input.close();
	return 0;
}
