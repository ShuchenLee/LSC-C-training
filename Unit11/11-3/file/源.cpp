#include<fstream>
#include<iostream>
using namespace std;

int main() {
	/*int a[5] = { 1,2,3,4,5 };
	ofstream file1("test.txt");
	for (int i = 0;i < 5;i++)
	{
		file1 << a[i];
	}

	file1.close();*/
	ofstream file1("test.txt",ios::app);
	file1 << "已成功添加字符！";
	file1.close();

	char ch;
	ifstream file2("test.txt");
	while (file2.get(ch))
		cout << ch;
	file2.close();
}
