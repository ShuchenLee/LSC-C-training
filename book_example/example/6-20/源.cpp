/*vector应用举例*/
#include<iostream>
#include<vector>
using namespace std;

//计算数组arr中元素的平均值
double average(const vector<double>&arr)//不加引用也可以
{
	double sum = 0;
	for (unsigned i = 0;i < arr.size();i++)
	{
		sum += arr[i];
	}
	return sum / arr.size();
}

int main()
{
	unsigned n;
	cin >> n;

	vector<double> arr(n);
	for (unsigned i = 0;i < n;i++)
		cin >> arr[i];

	cout << "average= " << average(arr) << endl;
}
