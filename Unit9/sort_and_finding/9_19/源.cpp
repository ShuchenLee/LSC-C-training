//折半查找:对于已按关键字排序的序列，经过一次比较，可将序列分割成两部分，然后只在有可能包含待查元素的一部分中继续查找，
//并根据试探结果继续分割，逐步缩小查找范围，直到找到或找不到为止
#include<iostream>
using namespace std;


//交换两个数的值
template<class T>
void Swap(T &x, T &y) {
	T temp;
	temp = x;
	x = y;
	y = temp;
}
//先对序列进行冒泡排序
template<class T>
void BubbleSort(T a[], int n) {
	int i, j;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n - i - 1;j++)
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);
	}
}

//再进行折半查找
template<class T>
int BinSearch(T a[], int n, T key) {
	BubbleSort(a, n);
	int mid, low, high;
	T midvalue;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		midvalue = a[mid];//取出中间元素的值;
		if (key == midvalue)
			return mid;//若找到，返回下标
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
	cout << "请输入要查找的关键字：";
	cin >> key;
	i = BinSearch(data, 20, key);
	if (i < 0)
		cout << "查找失败" << endl;
	else
		cout << "关键字" << key << "是第" << i + 1 << "个数字" << endl;
}