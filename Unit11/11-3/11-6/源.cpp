#include<fstream>
#include<iostream>
using namespace std;

class dog {
public:
	dog(int weight, long days) :itsWeight(weight), itsNumberDaysAlive(days) {}
	~dog(){}

	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	long GetDaysAlive()const { return itsNumberDaysAlive; }
	void SetDaysAlive(long days) { itsNumberDaysAlive = days; }

private:
	int itsWeight;
	long itsNumberDaysAlive;
};

int main()
{
	char fileName[80];
	cout << "请输入要创建的文件名：";
	cin >> fileName;
	ofstream fout(fileName);

	dog Dog1(5, 10);
	fout.write((char*)&Dog1, sizeof(Dog1));
	fout.close();

	ifstream fin(fileName);
	dog Dog2(2, 2);
	cout << "Dog2 weight:" << Dog2.GetWeight() << ", days:" << Dog2.GetDaysAlive() << endl;

	cout << endl;

	fin.read((char*)&Dog2, sizeof(Dog2));

	cout << "Dog2 weight:" << Dog2.GetWeight() << ", days:" << Dog2.GetDaysAlive() << endl;
	fin.close();
	return 0;
}