#include "LapTrinhVien.h"



void LapTrinhVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban" << endl;
	cin >> luongcoban;
	cout << "Nhap so gio over time" << endl;
	cin >> sogioovertime;
}
void LapTrinhVien::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "So gio over time " << sogioovertime << endl;
	cout << "Tong luong = " << getLuong() << endl;
}
int LapTrinhVien::getLuong()
{
	return luongcoban + sogioovertime * 200000;
}