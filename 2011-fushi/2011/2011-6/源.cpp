/*定义一个具有多态性的基类shape，派生出三个类：圆Circle（坐标点和半径），矩形Rec类（两点不同坐标），三角形类Tri（三个不同坐标），
每个类中至少有一个计算面积的函数。编写程序，从文件file.txt中读取数据来创建各类的对象，并放在shape指针向量中，最后循环
处理每个对象并输出面积
假设file.txt中的数据如下：  
      C:123,5,49;T:1,2,32,40,60,3;R:6,8,8,100  */

#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

class Shape {
public:
	virtual double getArea() = 0;
};

class Circle :public Shape {
public:
	Circle(int cir_x, int cir_y, int cir_r) :x(cir_x), y(cir_y), r(cir_r) {}
	double getArea() {
		return 3.14*r*r;
	}

private:
	int x, y, r;
};

class Rec :public Shape {
public:
	Rec(int rec_x1, int rec_y1, int rec_x2, int rec_y2) :x1(rec_x1), y1(rec_y1), x2(rec_x2), y2(rec_y2) {}
	double getArea() { return fabs(x2 - x1)*fabs(y2 - y1); }

private:
	int x1, y1, x2, y2;
};

class Tri :public Shape {
public:
	Tri(int tri_x1, int tri_y1, int tri_x2, int tri_y2, int tri_x3, int tri_y3) :x1(tri_x1), y1(tri_y1), x2(tri_x2), y2(tri_y2),
		x3(tri_x3), y3(tri_y3) {}
	double getArea();

private:
	int x1, x2, x3, y1, y2, y3;
};

double Tri::getArea()
{
	//计算三边长
	double a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	double b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	double c = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));

	double p = (a + b + c) / 2;  //半周长

	return sqrt(p*(p - a)*(p - b)*(p - c));//海伦公式
}

int main()
{
	Shape *shape;
	//vector<Shape *>vectors;
	ifstream fileIn("file.txt", ios::in);

	if (!fileIn)
	{
		cout << "The file cannot be opened!";
		exit(1);
	}

	char temp[50];
	while (fileIn)
	{
		fileIn.getline(temp, 50, ';');
		stringstream ss(temp);
		char ch;
		switch (temp[0])
		{
		case 'C':
		{
			int x, y, z;
			ss >> ch >> ch;//从ss中读取变量ch
			ss >> x >> ch >> y >> ch >> z;
			shape = new Circle(x, y, z);
			cout << shape->getArea() << endl;
	//		vectors.push_back(shape);
			break;
		}
		case 'T':
		{
			int x1, y1, x2, y2, x3, y3;
			ss >> ch >> ch;
			ss >> x1 >> ch >> y1 >> ch >> x2 >> ch >> y2 >> ch >> x3 >> ch >> y3;
			shape = new Tri(x1, y1, x2, y2, x3, y3);
			cout << shape->getArea() << endl;
			//vectors.push_back(shape);
			break;
		}
		case'R':
		{
			int x1, y1, x2, y2;
			ss >> ch >> ch;
			ss >> x1 >> ch >> y1 >> ch >> x2 >> ch >> y2;
			shape = new Rec(x1, y1, x2, y2);
			cout << shape->getArea() << endl;
			//vectors.push_back(shape);
			break;
		}
		}
	}

	//vector<Shape*>::iterator iterators;
	//for (iterators = vectors.begin();iterators < vectors.end();iterators++)
	//{
	//	cout << (*iterators)->getArea() << endl;
	//}
}