/*格式转换，从一个文件中读取日期07/21/2016，转换为以下格式July 21,2016输出*/

#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string month[] = { " ","January","February","March","April","May","June","July","August","September",
	"October","November","December" };

	ifstream in("test.txt");
	string s;
	in >> s;
	char ch;
	int month, day, year;
	istringstream input(s);
	input >> month >> ch >> day >> ch >> year;
	cout << month[month] << " " << day << "," << year << endl;
}