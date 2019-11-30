#include<iostream>
using namespace std;

class Tree {
public:
	Tree(int a=0);
	~Tree();
	void grow(int years) { ages += years; }
	void age() { cout << "这棵树的年龄为：" << ages << endl; }

private:
	int ages;
};

Tree::Tree(int a) {
	ages = a;
}

Tree::~Tree() {
	age();

}

int main() {
	Tree tree(12);
	
	tree.age();

	tree.grow(5);
	
}