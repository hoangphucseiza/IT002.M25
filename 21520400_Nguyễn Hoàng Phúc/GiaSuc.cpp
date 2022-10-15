#include "GiaSuc.h"

GiaSuc::GiaSuc()
{
	soluongsinhcon = 0;
	tiengkeu = "";
}
void GiaSuc::Nhap()
{
	soluongsinhcon = 1 + rand() % (100);
}
void GiaSuc::Xuat()
{
	cout << "So luong con da sinh la " << soluongsinhcon << endl;
}
LoaiGiaSuc GiaSuc::getLoai()
{
	return loai;
}
int GiaSuc:: getLitSua()
{
	return litsua;
}
string GiaSuc::getTiengkeu()
{
	return tiengkeu;
}