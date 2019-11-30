#include<iostream>
using namespace std;

class BaseClass {
public:
	virtual ~BaseClass() { cout << "调用基类的析构函数" << endl; }
};

class DerivedClass :public BaseClass {
public:
	~DerivedClass() { cout << "调用派生类的析构函数" << endl; }
};

int main() {
	BaseClass *ba = new DerivedClass;
	delete ba;

	return 0;
}