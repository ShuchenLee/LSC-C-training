/*�ļ��������Ƶ�һ���ַ���"(010)(15012345678)|123|(430070)",�����¸�ʽ�����"����|�绰����|���б��|�ʱ�"*/
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
	char *quhao;//����
	char *telephone;//�绰����
	char *bianhao;//���б��
	char *mail;//�ʱ�

	ifstream inFile("input.txt", ios::in);
	if (!inFile)
	{
		cout << "The file cannot be opened.";
		exit(1);
	}
	inFile >> temp;
	cout << temp << endl;//����Ļ�ϰ��ļ��е��ַ������
	
	
    //char* tokenPtr = strtok(temp, "(");

	for (int i = 1;i < 4;i++)
	{
		cout << temp[i];
	}
	cout << "|";//ɵ�ư취������ʡ��

}