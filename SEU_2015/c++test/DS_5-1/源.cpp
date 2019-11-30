/*有一组数列：65,34,22,17,118,65,3,13，请设计一个尽可能高效的算法，将这组数列的数字逆置，然后删除掉值最大的数据元素*/

#include<iostream>
using namespace std;

int main()
{
	int arr[8] = { 65,34,22,17,118,65,3,13 };
	int max = arr[0], max_b = 0;
	for (int i = 0;i < 8;i++) {
		if (arr[i] > max)
		{
			max = arr[i];
			max_b = i;
		}
	}

	int b[7];
	for (int i = max_b;i < 7;i++)//删掉最大的元素
	{
		arr[i] = arr[i + 1];
	}

	for (int i = 0;i < 7;i++)//逆置
	{
		b[i] = arr[6 - i];
	}

	for (int i = 0;i < 7;i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}