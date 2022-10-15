#include "VeTungPhan.h"


void VeTungPhan::Nhap()
{
	Ve::Nhap();
	cout << "Nhap so tro choi" << endl;
	cin >> sotrochoi;
	loai = TungPhan;
	giave = 70000;
}
void VeTungPhan::Xuat()
{
	Ve::Xuat();
	cout << "So tro choi la: " << sotrochoi << endl;
	cout << "Loai Ve la: " << loai << endl;
	cout << "Gia Ve la: " << giave << endl;
	cout << "Tong tien phai tra la: " << getTien() << endl;
}
int VeTungPhan::getTien()
{
	return giave + 20000 * sotrochoi;
}
LoaiVe VeTungPhan::getLoai()
{
	return loai;
}