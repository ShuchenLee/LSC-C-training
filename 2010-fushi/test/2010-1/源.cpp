/*输入n个十进制数转换成二进制写到文件，n是随机得到*/
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

void converto2(int data[],int size)
{
	ofstream outFile("output.txt");
	int count = 0;//记录二进制的位数
	for (int i = 0;i < size;i++)
	{
		int j = 0;
		int temp[10];//临时数组，用于存放二进制的每一位数字
		while (data[i] / 2 != 0)
		{
			temp[j] = data[i] % 2;
			j++;
			data[i] = data[i] / 2;
		}
		cout << "第" << i + 1 << "个数的二进制为:1";
		outFile<< "第" << i + 1 << "个数的二进制为:1";
		for (int k = j-1;k >=0;k--)
		{
			cout<<temp[k];
			outFile << temp[k];//写入文件
		}
		cout << endl;
		outFile << endl;
	}
}

int main()
{
	srand(time(0));
	int n = rand() % 10 + 1;//随机生成1~10之间的随机数;
	int data[10];
	cout << "生成的随机数n为:" << n << endl;
	cout << "请输入" << n << "个十进制数：";
	for (int i = 0;i < n;i++)
	{
		cin >> data[i];
	}
	converto2(data,n);


}
