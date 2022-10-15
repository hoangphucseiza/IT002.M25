#include "VeVip.h"



void VeVip::Nhap()
{
	Ve::Nhap();
	sodichvu = 10;
	giave = 1000000;
	loai = Vip;
}
void VeVip::Xuat()
{
	Ve::Xuat();
	cout << "Loai Ve: Vip" << endl;
	cout << "So Dich Vu: " << sodichvu << endl;
	cout << "Tong Tien Phai Tra La: " << TongTien() << endl;
}
LoaiVe VeVip::getLoai()
{
	return loai;
}
int VeVip::TongTien()
{
	return giave;
}