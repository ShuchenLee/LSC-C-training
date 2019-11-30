//交换排序（冒泡）：两两比较待排序序列中的元素，并交换不满足顺序要求的各队元素，直到全部满足顺序要求为止
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

template<class T>
void BubbleSort(T a[], int n) {
	int i, j;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n - i - 1;j++)
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);

		//输出每趟数据
		for (int k = 0; k < n; k++) {
			cout << a[k] << " ";
		}
		cout << endl;
	}
	
}

int main() {
	int i;
	int data[] = { 20,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,1 };
	cout << "排序前的数据：" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;
	cout << "开始排序：" << endl;
	BubbleSort(data, 20);
	cout << endl;
	cout << endl;
	cout << "排序后的数据：" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;

}