/*д��������ģ�壺�������򷨵ĵ���ʵ����ݹ�ʵ��*/
#include<iostream>
using namespace std;

template<class T1>
void dieDai_Sort(T1 *s, int size);//����

template<class T1>
void diGui_Sort(T1 *s, int size);//�ݹ�

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

	//���±�Ϊ1~n-1��Ԫ��������뵽�������������ʵ���λ��
	for (i = 1;i < size;i++)
	{
		//��A[i-1]��ʼ��A[0]����ɨ���Ԫ�أ�Ѱ���ʵ�λ�ò���A[i]

		j = i;
		temp = s[i];
		while (j > 0 && temp < s[j - 1]) {
			//����Ƚϣ�ֱ��temp>=A[j-1]ʱ��j����Ӧ�����λ�á����ﵽj==0����0��Ӧ����λ��
			s[j] = s[j - 1];
			j--;
		}
		//����λ�����ҵ�����������
		s[j] = temp;
	}
}


//��n����ǰ���Ѿ�����õ�����
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
		diGui_Sort(s, size - 1); //�ݹ��ʾǰ���Ѿ������
		Insert(s, size);
	}
	else   //�ݹ�ĳ�����n=0
		return;
}