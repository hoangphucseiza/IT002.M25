#include "VeTapThu.h"


void VeTapThu::Nhap()
{
	Ve::Nhap();
	cout << "Nhap So Dich Vu" << endl;
	cin >> sodichvu;
	giave = 150000;
	loai = TapThu;
}
void VeTapThu::Xuat()
{
	Ve::Xuat();
	cout << "Loai Ve: Tap Thu" << endl;
	cout << "So Dich Vu: " << sodichvu << endl;
	cout << "Tong Tien Phai Tra La: " << TongTien() << endl;
}
LoaiVe VeTapThu::getLoai()
{
	return loai;
}
int VeTapThu::TongTien()
{
	return giave + 50000 * sodichvu;
}