/*��һ�����У�65,34,22,17,118,65,3,13�������һ�������ܸ�Ч���㷨�����������е��������ã�Ȼ��ɾ����ֵ��������Ԫ��*/

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
	for (int i = max_b;i < 7;i++)//ɾ������Ԫ��
	{
		arr[i] = arr[i + 1];
	}

	for (int i = 0;i < 7;i++)//����
	{
		b[i] = arr[6 - i];
	}

	for (int i = 0;i < 7;i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}