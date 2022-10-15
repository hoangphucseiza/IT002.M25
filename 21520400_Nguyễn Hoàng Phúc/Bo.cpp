#include "Bo.h"
Bo::Bo()
{
	GiaSuc::GiaSuc();
	loai = B;
}
void Bo::Nhap()
{
	GiaSuc::Nhap();
	litsua = 0 + rand() % (20 + 1 - 0);
	tiengkeu = "Umm Bo";
}
void Bo::Xuat()
{
	GiaSuc::Xuat();
	cout << tiengkeu << endl;
	cout << "So lit Sua Da Cho La " << litsua << endl;
	
}
int Bo::getLitSua()
{
	return litsua;
}
string Bo::getTiengkeu()
{
	return tiengkeu;
}