#include<iostream>
using namespace std;

template<class T>
void InsertionSort(T A[], int n)//��������
{
	int i, j;
	T temp;

	//���±�Ϊ1~n-1��Ԫ��������뵽�������������ʵ���λ��
	for(i=1;i<n;i++)
	{
		//��A[i-1]��ʼ��A[0]����ɨ���Ԫ�أ�Ѱ���ʵ�λ�ò���A[i]
		
		j = i;
		temp = A[i];
		while (j > 0 && temp < A[j - 1]) {
			//����Ƚϣ�ֱ��temp>=A[j-1]ʱ��j����Ӧ�����λ�á����ﵽj==0����0��Ӧ����λ��
			A[j] = A[j - 1];
			j--;
		}
		//����λ�����ҵ�����������
		A[j] = temp;

		
		for (int k = 0; k < n; k++) {
			cout << A[k] << " ";
		}
		cout << endl;
	}
	
}

int main() {
	int i;
	int data[] = { 1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20 };
	cout << "����ǰ�����ݣ�" << endl;
	for (i = 0;i < 20;i++) 
		cout << data[i] << " ";
	cout << endl;
	cout << "��ʼ����" << endl;
	InsertionSort(data, 20);
	cout << endl;
	cout << endl;
	cout << "���������ݣ�" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;
	
}
