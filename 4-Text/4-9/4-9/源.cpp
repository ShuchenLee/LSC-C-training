#include<iostream>
using namespace std;

class Rectangle {

public:
	Rectangle(int top, int left, int buttom, int right);
	~Rectangle();

	/*int GetTop() const { return itstop; }
	int GetLeft() const { return itsleft; }
	int GetButtom() const { return itsbuttom; }
	int GetRight() const { return itsright; }*/
	int GetArea() const { return (itstop - itsbuttom)*(itsright - itsleft); }

	//void SetTop(int top) { itstop = top; }
	//void SetLeft(int left) { itsleft = left; }
	//void SetButtom(int buttom) { itsbuttom = buttom; }
	//void SetRight(int right) { itsright = right; }

private:
	int itstop, itsleft, itsbuttom, itsright;

};

Rectangle::Rectangle(int top, int left, int buttom, int right) {
	itstop = top;
	itsleft = left;
	itsbuttom = buttom;
	itsright = right;

}

Rectangle::~Rectangle() {

}

int main() {
	Rectangle rectangle(10, 2, 5, 8);

	cout << "The area is " << rectangle.GetArea() << endl;
}