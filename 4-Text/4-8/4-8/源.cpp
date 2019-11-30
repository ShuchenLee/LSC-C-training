#include<iostream>
using namespace std;

class Dog {
public:
	Dog(int initialAge = 0, int initialWeight = 5);
	~Dog();
	int getAge() { return itsAge; }
	int getWeight() { return itsWeight; }

private:
	int itsAge, itsWeight;
};

Dog::Dog(int initialAge, int initialWeight) {
	itsAge = initialAge;
	itsWeight = initialWeight;
}

Dog::~Dog() {

}

int main() {
	Dog dog(2, 8);
	cout << "The dog is " << dog.getAge() << " years old, and " << dog.getWeight() << " pounds weight" << endl;
}