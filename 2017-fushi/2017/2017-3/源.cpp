/*从文件读入一个字符串，对其进行奇偶排序，使字母都按顺序排列
奇偶排序：每个奇数的字符开始，依次比较，若a[i-1]>a[i]或者a[i]>a[i+1]则交换；再从偶数的字符开始，
如此循环往复，直至交换完毕*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs("input.txt", ios::in);
	if (!ifs)
	{
		cerr << "File cannot be opened!" << endl;
		exit(1);
	}

	string str;
	ifs >> str;
	cout << str << endl;

	bool flag1, flag2;

	do
	{
		flag1 = true;
		flag2 = true;
		for (int i = 1;i < str.length() - 1;i+=2)
		{
			if (str[i] > str[i + 1])
			{
				swap(str[i], str[i + 1]);
				flag1 = false;
			}
		}

		for (int i = 0;i < str.length();i += 2)
		{
			if (str[i] > str[i + 1])
			{
				swap(str[i], str[i + 1]);
				flag2 = false;
			}
		}
	} while (flag1 == false || flag2 == false);

	cout << str << endl;
	return 0;
}
