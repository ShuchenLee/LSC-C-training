/*vectorӦ�þ���*/
#include<iostream>
#include<vector>
using namespace std;

//��������arr��Ԫ�ص�ƽ��ֵ
double average(const vector<double>&arr)//��������Ҳ����
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
