//选择排序：每次从待排序列中选择一个最小的元素，顺序排在已排序序列的最后，直至全部排完
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
void SelectionSort(T a[], int n) {
	int smallIndex;//每趟中选出最小元素的下标
	int i, j;

	for (i = 0;i < n-1;i++) {
		smallIndex = i;
		for (j = i + 1;j < n;j++) {
			if (a[smallIndex] > a[j])
				smallIndex = j;
		}
		Swap(a[i], a[smallIndex]);

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
	SelectionSort(data, 20);
	cout << endl;
	cout << endl;
	cout << "排序后的数据：" << endl;
	for (i = 0;i < 20;i++)
		cout << data[i] << " ";
	cout << endl;

}