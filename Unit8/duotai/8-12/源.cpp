#include<iostream>
using namespace std;

class BaseClass {
public:
	virtual ~BaseClass() { cout << "���û������������" << endl; }
};

class DerivedClass :public BaseClass {
public:
	~DerivedClass() { cout << "�������������������" << endl; }
};

int main() {
	BaseClass *ba = new DerivedClass;
	delete ba;

	return 0;
}