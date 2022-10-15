#include "De.h"

De::De()
{
	GiaSuc::GiaSuc();
	loai = D;
}
void  De::Nhap()
{
	GiaSuc::Nhap();
	litsua = 0 + rand() % (10 + 1 - 0);
	tiengkeu = "Deee Deee";
}
void De::Xuat()
{
	GiaSuc::Xuat();
	cout << tiengkeu << endl;
	cout << "So lit Sua Da Cho La " << litsua << endl;
}
int De::getLitSua()
{
	return litsua;
}
string De::getTiengkeu()
{
	return tiengkeu;
}