//˳����ң����������Ԫ�ؿ�ʼ�����Ԫ��������ҵĹؼ��ֽ��бȽϣ�ֱ���ҵ���ȵ�
#include<iostream>
using namespace std;

template<class T>
int SeqSearch(T a[], int n, T key) {
	int i;
	for (i = 0;i < n;i++) {
		if (a[i] == key)
			return i;
	}
	return -1;
}

int main() {
	int data[] = { 20,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,1 };
	int i, key;
	cout << "������Ҫ���ҵĹؼ��֣�";
	cin >> key;
	i = SeqSearch(data, 20, key);
	if (i < 0)
		cout << "����ʧ��" << endl;
	cout << "�ؼ���" << key << "�ǵ�" << i + 1 << "������" << endl;
}