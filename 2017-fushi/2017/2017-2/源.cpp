/*��ʽת������һ���ļ��ж�ȡ����07/21/2016��ת��Ϊ���¸�ʽJuly 21,2016���*/

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