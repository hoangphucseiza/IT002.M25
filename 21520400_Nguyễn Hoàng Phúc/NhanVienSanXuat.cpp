#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat() : NhanVien()
{
	this->sosanpham = 0;
	loai = NVSX;
}
int NhanVienSanXuat::getLuong()
{
	return NhanVien::luongcoban + sosanpham * 5000;
}
void  NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so san pham" << endl;
	cin >> this->sosanpham;
}
void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << this->getLuong()<<endl;
}
NhanVienSanXuat& NhanVienSanXuat:: operator =(NhanVienSanXuat& a)
{
	NhanVien ::operator=(a);
	this->sosanpham = a.sosanpham;
	return *this;
}