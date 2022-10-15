#include "Cuu.h"


Cuu::Cuu()
{
	GiaSuc::GiaSuc();
	loai = C;
}
void Cuu::Nhap()
{
	GiaSuc::Nhap();
	litsua = 0 + rand() % (5 + 1 - 0);
	tiengkeu = "Beee Bee";
}
void Cuu::Xuat()
{
	GiaSuc::Xuat();
	cout << tiengkeu << endl;
	cout << "So lit Sua Da Cho La " << litsua << endl;
}
int Cuu::getLitsua()
{
	return litsua;
}
string Cuu::getTiengkeu()
{
	return tiengkeu;
}