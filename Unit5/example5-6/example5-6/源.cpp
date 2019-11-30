#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
	Point (int x=0, int y=0) : x(x),y(y){}
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point p1, Point p2);
private:
	int x, y;
};

float dist(Point p1, Point p2) {
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	return sqrt(x*x + y*y);
}

int main() {
	Point myp1(1, 1), myp2(4, 5);
	cout << "The distance is : ";
	cout << dist(myp1, myp2) << endl;
	return 0;
}