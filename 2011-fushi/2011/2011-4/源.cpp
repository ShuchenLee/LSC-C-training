/*编写两个函数SortOne，SortTwo，分别对字符串数组实现插入排序和选择排序*/
#include<iostream>
#include<string>
using namespace std;

void SortOne(string &, int length);//插入排序
//void SortTwo(char *, int length);//选择排序

int main()
{
	string s1 = "nishishuya!";
	int length1 = s1.length();

	//string *s2 = new char[length1 + 1];
	//strcpy(s2, s1);

	//s2[length1] = '\0';

	SortOne(s1, length1);
	cout << "s1插入排序结果为:" << s1 << endl;
	//SortTwo(s2, length1);
	//cout << "s2选择排序结果为:" << s2 << endl;

}

//选择数组0号元素为哨兵
void SortOne(string &s, int length)
{
	//int j;
	//for (int i = 1;i < length;i++)
	//{
	//	s[0] = s[i];
	//	for (j = i - 1;s[j] > s[0];j--)
	//		s[j + 1] = s[j];
	//	s[j + 1] = s[0];
	//}

	for (int i = 1; i < length; ++i) {	//从第二个元素开始扫描，第一个元素默认已排好
		int temp = s[i];					//将待排序元素取出存入临时变量
		int j = i - 1;						//指向已排区间的最后一个元素
		while (j >= 0 && s[j] > temp) {	//找到比待插入元素小或者等于的那个元素位置，相等的情况也跳出（只有大于的情况才进行移动），保证了算法的稳定性
			s[j + 1] = s[j];			//将比待排元素大的元素依次向后移位
			--j;
		}
		s[j + 1] = temp;					//将待插入元素插入到比它小或者等于的那个元素位置的后面
	}
	
}

//void SortTwo(char *s, int length)
//{
//	int k;
//	char temp;
//	for (int i = 0;i < length;i++)
//	{
//		k = i;
//		for (int j = i + 1;j < length;j++)
//			if (s[k] > s[j])
//				k = j;
//		if (k != i)
//		{
//			temp = s[i];
//			s[i] = s[k];
//			s[k] = temp;
//		}
	//}
//}