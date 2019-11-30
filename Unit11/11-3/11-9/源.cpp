#include<iostream>
#include<fstream>
using namespace std;

int main() {
	//ofstream file;
	//file.open("input.txt");
	//file << "aaaaaaaa\nbbbbbbbb\ncccccccc";
	//file.close();

	//ifstream filei("filetext.txt");
	//ofstream fileo;
	//fileo.open("output.txt");

	//char c;
	//filei >> noskipws;
	//int i = 1;
	//fileo << i << ".";
	//while (filei >> c) {
	//	if (c == '\n') {
	//		i++;
	//		fileo << "\n";
	//		fileo << i << ".";
	//	}
	//	else {
	//		fileo << c;
	//	}
	//}
	//filei.close();
	//fileo.close();

	double n;
	cin >> n;
	cout.setf(ios::fixed);
	cout.precision(5);
	cout << n << endl;
	cout.unsetf(ios::fixed);
	cout.setf(ios::scientific);
	cout.precision(7);
	cout << n << endl;
	return 0;

}



