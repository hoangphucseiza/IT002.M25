#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc()
{
	this->phanao = 0;
	this->phanthuc = 0;
}
SoPhuc::SoPhuc(int a, int b )
{
	this->phanthuc = a;
	this->phanao = b;
}
istream& operator >> (istream& is, SoPhuc& sp)
{
	is >> sp.phanthuc >> sp.phanao;
	return is;
}
 ostream& operator << (ostream & os, SoPhuc sp)
{
	return os<<sp.phanthuc << "+" << sp.phanao << "i" << endl;
}
SoPhuc operator +(SoPhuc sp1, SoPhuc sp2)
{
	return SoPhuc(sp1.phanthuc + sp2.phanthuc, sp1.phanao + sp2.phanao);
}
SoPhuc operator -(SoPhuc sp1, SoPhuc sp2)
{
	return SoPhuc(sp1.phanthuc - sp2.phanthuc, sp1.phanao - sp2.phanao);
 }
SoPhuc operator *(SoPhuc sp1, SoPhuc sp2)
{
	return SoPhuc(sp1.phanthuc * sp2.phanthuc - sp1.phanao * sp2.phanao, sp1.phanthuc * sp2.phanao + sp1.phanao * sp2.phanthuc);
 }
SoPhuc operator /(SoPhuc sp1, SoPhuc sp2)
{
	return SoPhuc(1.0 * ((sp1.phanthuc * sp2.phanthuc + sp1.phanao * sp2.phanao)) / 1.0 * ((sp2.phanao * sp2.phanao + sp2.phanthuc * sp2.phanthuc)),
			1.0 * ((sp2.phanthuc * sp1.phanao - sp1.phanthuc * sp2.phanao)) / 1.0 * ((sp2.phanao * sp2.phanao + sp2.phanthuc * sp2.phanthuc)));
		
 }
double  SoPhuc::TriTuyetDoiCuaSoPhuc() {
	return sqrt(this->phanthuc * this->phanthuc + this->phanao * this->phanao);
}