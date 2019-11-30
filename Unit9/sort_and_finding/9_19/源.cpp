//�۰����:�����Ѱ��ؼ�����������У�����һ�αȽϣ��ɽ����зָ�������֣�Ȼ��ֻ���п��ܰ�������Ԫ�ص�һ�����м������ң�
//��������̽��������ָ����С���ҷ�Χ��ֱ���ҵ����Ҳ���Ϊֹ
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
//�ȶ����н���ð������
template<class T>
void BubbleSort(T a[], int n) {
	int i, j;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n - i - 1;j++)
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);
	}
}

//�ٽ����۰����
template<class T>
int BinSearch(T a[], int n, T key) {
	BubbleSort(a, n);
	int mid, low, high;
	T midvalue;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		midvalue = a[mid];//ȡ���м�Ԫ�ص�ֵ;
		if (key == midvalue)
			return mid;//���ҵ��������±�
		else if (key < midvalue)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main() {
	int data[] = { 20,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,1 };
	int i, key;
	cout << "������Ҫ���ҵĹؼ��֣�";
	cin >> key;
	i = BinSearch(data, 20, key);
	if (i < 0)
		cout << "����ʧ��" << endl;
	else
		cout << "�ؼ���" << key << "�ǵ�" << i + 1 << "������" << endl;
}