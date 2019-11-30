#include <fstream>
#include <iostream>
using namespace std;
void main()
{
	char rbuf[50] = { 0 };
	char wbuf[50] = { 0 };
	fstream infile, outfile;
	int i, j;
	infile.open("aaaa.txt", fstream::in);
	outfile.open("b.txt", fstream::out);
	for (i = 0; !infile.eof(); ++i)
	{
		infile >> rbuf[i];
	}
	for (j = 0; j != i; ++j)
	{
		wbuf[j] = rbuf[i - j - 2];
	}
	outfile << wbuf;
	infile.close();
	outfile.close();
}