/*��Ԫ���������������*/
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
	char s1[100][20] = { "" };   //���str1[]���ӣ��ֽ�ɵ��ʱ�����s1��
	char s2[100][20] = { "" };    //���str2[]���ӣ�
	char tstr1[str1.length];
	char tstr2[str2.length];
	strcpy(tstr1, str1.dataStr);
	strcpy(tstr2, str2.dataStr);

	char *temp;                      //�ֽ����str1
	temp = strtok(tstr1, " .");
	int len1 = 0;
	while (temp)
	{
		strcpy(&s1[len1++][0], temp);
		temp = strtok(NULL, " .");
	}
	//�ֽ����str2
	temp = strtok(tstr2, " .");
	int len2 = 0;
	while (temp)
	{
		strcpy(&s2[len2][0], temp);
		len2++;
		temp = strtok(NULL, " .");
	}
	//������������
	size_t maxlen = 0, count = 0;
	char common[100][20] = { "" };
	char s[20];
	for (int i = 0; i <= len1; i++)     //С�ڵ��ڳ���
	{
		strcpy(s, &s1[i][0]);
		for (int j = 0; j <= len2; j++)  //С�ڵ��ڳ���
			if (strcmp(s, &s2[j][0]) == 0)
			{
				strcpy(&common[count++][0], s);
				if (maxlen < strlen(s))
					maxlen = strlen(s);
			}
	}
	//������������
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
