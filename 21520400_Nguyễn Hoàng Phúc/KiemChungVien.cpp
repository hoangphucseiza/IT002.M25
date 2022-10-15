#include "KiemChungVien.h"




void KiemChungVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban" << endl;
	cin >> luongcoban;
	cout << "Nhap so loi phat hien duoc" << endl;
	cin >> soloi;
}
void KiemChungVien::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "So loi phat hien duoc " << soloi << endl;
	cout << "Tong luong = " << getLuong() << endl;
}
int KiemChungVien::getLuong()
{
	return luongcoban + soloi * 50000;
}