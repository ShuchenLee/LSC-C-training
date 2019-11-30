#include<iostream>
using namespace std;

class Circle {
public:

	Circle(int R);
	~Circle();
	float GetArea() { return 3.14 * Radius * Radius; }

private:
	int Radius;
};

Circle::Circle(int R) {
	Radius = R;
}

Circle::~Circle() {

}

int main() {
	int rid;
	cout << "ÇëÊäÈëÔ²µÄ°ë¾¶£º";
	cin >> rid;
	Circle circle(rid);
	cout << "The Area is : " << circle.GetArea() << endl;
}