/*递归求数组中最小值*/
#include<iostream>
using namespace std;

template<class T>
int find_Min(const T[], int);

int main()
{
	int a[] = { 4,2,3,67,7,5,3,45,1,23,0,56 };
	cout << find_Min(a, 12);
	return 0;
}

template<class T>
int find_Min(const T a[], int len)
{
	static int small = a[0];
	if (len == 0)
		return small;
	if (small > a[len - 1])
		small = a[len - 1];
	small = find_Min(a, len - 1);
}