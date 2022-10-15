#include "VeTronGoi.h"


void VeTronGoi::Nhap()
{
	Ve::Nhap();
	loai = TronGoi;
	giave = 200000;
}
void VeTronGoi::Xuat()
{
	Ve::Xuat();
	cout << "Loai Ve la: " << loai << endl;
	cout << "Gia Ve la: " << giave << endl;
	cout << "Tong tien phai tra la: " << getTien() << endl;
}
int VeTronGoi:: getTien()
{
	return giave ;
}
LoaiVe VeTronGoi:: getLoai()
{
	return loai;
}