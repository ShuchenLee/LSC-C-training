//顺序查找：从数组的首元素开始，逐个元素与待查找的关键字进行比较，直到找到相等的
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
	cout << "请输入要查找的关键字：";
	cin >> key;
	i = SeqSearch(data, 20, key);
	if (i < 0)
		cout << "查找失败" << endl;
	cout << "关键字" << key << "是第" << i + 1 << "个数字" << endl;
}