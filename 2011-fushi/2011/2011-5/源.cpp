/*对于一个数组Array类的chess对象，通过调用运算符重载函数（），可实现chess(row,column)代替chess[row][column]，
请完成Array类的定义，运算符（）的重载*/
#include<iostream>
#include<iomanip>
using namespace std;

template <class T>
class Array {
public:
	Array(int, int);
	~Array();
	Array(const Array &copy);

	void setArray(T *);
	T& operator()(int rowValue, int colValue);

	int getRow()const { return row; }
	int getCol()const { return col; }

private:
	int row, col;
	T *ptr;
};

template<class T>
Array<T>::Array(int row, int col) :row(row), col(col)
{
	int length = row*col;
	ptr = new T[length];
}

template<class T>
Array<T>::~Array()
{
	delete[] ptr;
}

template<class T>
Array<T>::Array(const Array &copy)
{
	row = copy.row;
	col = copy.col;
	ptr = &(new T[row*col]);
	for (int i = 0;i < row;i++)
		for (int j = 0;j < col;j++)
			ptr[i][j] = copy.ptr[i][j];
}

template<class T>//这个函数是干嘛的?
void Array<T>::setArray(T *p)
{
	T *q = ptr;
	T *p_end = p + row*col;
	for (;p < p_end;p++, q++)
		*q = *p;
}

template<class T>
T& Array<T>::operator()(int row1, int col1)
{
	return ptr[col*row1 + col1];
}

int main()
{
	int as[][4] = { 1,2,3,4,5,6,7,8,9 };
	Array<int> chess(2, 5);
	chess.setArray(*as);
	for (int i = 0;i < chess.getRow();i++)
	{
		for (int j = 0;j < chess.getCol();j++)
			cout << setw(10) << chess(i, j);
		cout << endl;
	}
}