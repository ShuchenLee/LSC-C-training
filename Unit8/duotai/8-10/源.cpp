#include<iostream>
using namespace std;

class Point {
public:
	Point() { itsX = 0, itsY = 0; }
	Point& operator++();
	Point operator++(int);

	Point& operator--();
	Point operator--(int);

	int getX() { return itsX; }
	int getY() { return itsY; }
private:
	int itsX, itsY;
};

Point& Point::operator++() {
	itsX++;
	itsY++;
	return *this;
}

Point Point::operator++(int) {
	Point temp = *this;
	++(*this);
	return temp;
}

Point& Point::operator--() {
	itsX--;
	itsY--;
	return *this;
}

Point Point::operator--(int) {
	Point temp = *this;
	--(*this);
	return temp;
}

int main() {
	Point A;
	cout << "A的值为" << A.getX() << "," << A.getY() << endl;

	A++;
	cout << "A的值为" << A.getX() << "," << A.getY() << endl;

	++A;
	cout << "A的值为" << A.getX() << "," << A.getY() << endl;

	--A;
	cout << "A的值为" << A.getX() << "," << A.getY() << endl;

	A--;
	cout << "A的值为" << A.getX() << "," << A.getY() << endl;

	return 0;
}