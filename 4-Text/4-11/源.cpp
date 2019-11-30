#include<iostream>
using namespace std;

class Rectangle {

public:
	Rectangle(int length , int wide);
	~Rectangle();

	/*int GetLength() const { return itsLenght; }
	int GetWide() const { return itsWide; }*/
	int GetArea() const { return itsLenght*itsWide; }
private:
	int itsLenght,itsWide;

};

Rectangle::Rectangle(int length, int wide) {
	itsLenght = length;
	itsWide = wide;
}

Rectangle::~Rectangle() {

}

int main() {
	int Len, Wid;
	cout << "输入长： ";
	cin >> Len;
	cout << "输入宽： ";
	cin >> Wid;
	cout << endl;
	Rectangle rectangle(Len, Wid);

	cout << "这个长方形面积是: " << rectangle.GetArea() << endl;
}