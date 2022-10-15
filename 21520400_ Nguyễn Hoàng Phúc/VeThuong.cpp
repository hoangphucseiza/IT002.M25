#include "VeThuong.h"



void VeThuong::Nhap()
{
	Ve::Nhap();
	cout << "Nhap So Dich Vu" << endl;
	cin >> sodichvu;
	giave = 500000;
	loai = Thuong;
}
void VeThuong::Xuat()
{
	Ve::Xuat();
	cout << "Loai Ve: Thuong" << endl;
	cout << "So Dich Vu: " << sodichvu << endl;
	cout << "Tong Tien Phai Tra La: " << TongTien() << endl;
}
LoaiVe VeThuong::getLoai()
{
	return loai;
}
int VeThuong::TongTien()
{
	return giave +100000*sodichvu;
}