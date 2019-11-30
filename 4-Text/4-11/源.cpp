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
	cout << "���볤�� ";
	cin >> Len;
	cout << "����� ";
	cin >> Wid;
	cout << endl;
	Rectangle rectangle(Len, Wid);

	cout << "��������������: " << rectangle.GetArea() << endl;
}