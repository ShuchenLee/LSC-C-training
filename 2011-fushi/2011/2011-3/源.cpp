/*��дһ���ݹ麯��ģ�壬��һ���������ҳ���Сֵ�������ظ�ֵ������Ԫ���±�*/
#include<iostream>
using namespace std;

template<class T>
void DiGui_Min(const T *s, int &minNum, int len)
{
	if (len > 0)
	{
		DiGui_Min(s, minNum, len - 1);
		if (s[minNum] >= s[len])
			minNum = len;
	}
	else if (len = 0)
		minNum = s[minNum] > s[0] ? 0 : minNum;
}

int main()
{
	int a[10] = { 3,2,1,9,5,6,7,8,4,0 };
	int min = 0;
	DiGui_Min(a, min, 9);
	cout << min;
}