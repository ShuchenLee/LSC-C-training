#include<iostream>
using namespace std;

class BaseClass {
public:
	virtual void f() { cout << "调用基类的f()" << endl; }
	void g() { cout << "调用基类的g()" << endl; }
	void h() { cout << "调用基类的h()" << endl; }
};

class DerivedClass :public BaseClass {
public:
	void f() { cout << "调用派生类的f()" << endl; }
	void g() { cout << "调用派生类的g()" << endl; }
	void h() { cout << "调用派生类的h()" << endl; }
};

int main()
{
	DerivedClass der;
	DerivedClass *d;
	BaseClass *b;
	d = &der;
	b = &der;

	/*(*d).f();
	(*d).g();
	(*d).h();

	cout << endl;

	(*b).f();
	(*b).g();
	(*b).h();

	cout << endl;*/

	d->f();
	d->g();
	d->h();

	cout << endl;

	b->f();
	b->g();
	b->h();


}

