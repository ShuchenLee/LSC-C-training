/*写两个函数模板：插入排序法的迭代实现与递归实现*/
#include<iostream>
using namespace std;

template<class T1>
void dieDai_Sort(T1 *s, int size);//迭代

template<class T1>
void diGui_Sort(T1 *s, int size);//递归

int main()
{
	int s[] = { 1,3,2,5,4,8,6,7,9,0 };
	double s1[] = { 0.4,0.2,0.6,0.3,0.9,0.5,0.7 };
	diGui_Sort(s, 10);
	dieDai_Sort(s1, 7);
	for (int i = 0;i < 10;i++)
		cout << s[i] << ' ';
	cout << endl;
	for (int i = 0;i < 7;i++)
		cout << s1[i] << ' ';
	cout << endl;
}

template<class T1>
void dieDai_Sort(T1 *s, int size)
{
	int i, j;
	T1 temp;

	//将下标为1~n-1的元素逐个插入到已排序序列中适当的位置
	for (i = 1;i < size;i++)
	{
		//从A[i-1]开始向A[0]方向扫描各元素，寻找适当位置插入A[i]

		j = i;
		temp = s[i];
		while (j > 0 && temp < s[j - 1]) {
			//逐个比较，直到temp>=A[j-1]时，j便是应插入的位置。若达到j==0，则0是应插入位置
			s[j] = s[j - 1];
			j--;
		}
		//插入位置已找到，立即插入
		s[j] = temp;
	}
}


//把n插入前面已经排序好的数组
template<class T1>
void Insert(T1 *a, int size)
{
	int i = size - 1;
	T1 key = a[size];
	while ((i >= 0) && key<a[i])
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = key;

}

template<class T1>
void diGui_Sort(T1 *s, int size)
{
	if (size>0)
	{
		diGui_Sort(s, size - 1); //递归表示前面已经排序好
		Insert(s, size);
	}
	else   //递归的出口是n=0
		return;
}