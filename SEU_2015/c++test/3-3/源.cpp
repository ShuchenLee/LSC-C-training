#include<iostream>
using namespace std;

class BaseClass {
public:
	virtual void f() { cout << "���û����f()" << endl; }
	void g() { cout << "���û����g()" << endl; }
	void h() { cout << "���û����h()" << endl; }
};

class DerivedClass :public BaseClass {
public:
	void f() { cout << "�����������f()" << endl; }
	void g() { cout << "�����������g()" << endl; }
	void h() { cout << "�����������h()" << endl; }
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

