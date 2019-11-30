#include<iostream>
using namespace std;

class shape {
public:
	shape(){}
	~shape() {};
};

class rectangle: public shape {
public:
	//rectangle(int len,int wid):length(len),width(wid){}
	~rectangle() {}

	void setlength(int len) { length = len; }
	void setwidth(int wid) { width = wid; }
	int getlength() { return length; }
	int getwidth() { return width; }
	int getArea() { return length*width; }
	int getPerimeter() { return (length + width) * 2; }

	//friend double totalarea(int a, double b);

private:
	int length;
	int width;
};

class circle : public shape {
public:
	//circle(int r):radius(r){}
	~circle() {}
	
	void setradius(int r) { radius = r; }
	int getradius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
	double getPerimeter() { return 2 * 3.14 * radius; }

	//friend double totalarea(int a, double b);
private:
	int radius;
};


double totalarea(int a,double b) {
	return a + b;
}

int main() {
	rectangle rec;
	circle cir;

	rec.setlength(5);
	rec.setwidth(4);

	cir.setradius(3);

	cout << "rec的长度、宽度、面积、周长分别为：" << rec.getlength() << " " << rec.getwidth() << " " << rec.getArea()
		<< " " << rec.getPerimeter() << endl;

	cout << "cir的半径，面积，周长分别为： " << cir.getradius() << " " << cir.getArea() << " " << cir.getPerimeter() << endl;

	int a = rec.getArea();
	double b = cir.getArea();

	cout << "cir和rec的面积总和为: " << totalarea(a, b) << endl;

	return 0;
	
}