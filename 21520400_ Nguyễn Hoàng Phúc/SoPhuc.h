#include<iostream>
using namespace std;
class SoPhuc
{
private:
	int phanthuc;
	int phanao;
public:
	SoPhuc();
	SoPhuc(int a, int b);
	friend istream& operator >> (istream& is, SoPhuc& sp);
	friend ostream& operator << (ostream & os, SoPhuc sp);
	friend SoPhuc operator +(SoPhuc sp1, SoPhuc sp2);
	friend SoPhuc operator -(SoPhuc sp1, SoPhuc sp2);
	friend SoPhuc operator *(SoPhuc sp1, SoPhuc sp2);
	friend SoPhuc operator /(SoPhuc sp1, SoPhuc sp2);
	double TriTuyetDoiCuaSoPhuc();
};


