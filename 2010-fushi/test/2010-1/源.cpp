/*����n��ʮ������ת���ɶ�����д���ļ���n������õ�*/
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

void converto2(int data[],int size)
{
	ofstream outFile("output.txt");
	int count = 0;//��¼�����Ƶ�λ��
	for (int i = 0;i < size;i++)
	{
		int j = 0;
		int temp[10];//��ʱ���飬���ڴ�Ŷ����Ƶ�ÿһλ����
		while (data[i] / 2 != 0)
		{
			temp[j] = data[i] % 2;
			j++;
			data[i] = data[i] / 2;
		}
		cout << "��" << i + 1 << "�����Ķ�����Ϊ:1";
		outFile<< "��" << i + 1 << "�����Ķ�����Ϊ:1";
		for (int k = j-1;k >=0;k--)
		{
			cout<<temp[k];
			outFile << temp[k];//д���ļ�
		}
		cout << endl;
		outFile << endl;
	}
}

int main()
{
	srand(time(0));
	int n = rand() % 10 + 1;//�������1~10֮��������;
	int data[10];
	cout << "���ɵ������nΪ:" << n << endl;
	cout << "������" << n << "��ʮ��������";
	for (int i = 0;i < n;i++)
	{
		cin >> data[i];
	}
	converto2(data,n);


}
