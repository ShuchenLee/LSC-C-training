//��������ð�ݣ��������Ƚϴ����������е�Ԫ�أ�������������˳��Ҫ��ĸ���Ԫ�أ�ֱ��ȫ������˳��Ҫ��Ϊֹ
#include<iostream>
using namespace std;

//������������ֵ
template<class T>
void Swap(T &x, T &y) {
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template<class T>
void BubbleSort(T a[], int n) {
	int i, j;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n - i - 1;j++)
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);

		//���ÿ������
		for (int k = 0; k < n; k++) {
			cout << a[k] << " ";
		}
		cout << endl;
	}
	
}

int main() {
	int i;
	int data[] = { 20,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,1 };
	cout << "����ǰ�����ݣ�" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;
	cout << "��ʼ����" << endl;
	BubbleSort(data, 20);
	cout << endl;
	cout << endl;
	cout << "���������ݣ�" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;

}