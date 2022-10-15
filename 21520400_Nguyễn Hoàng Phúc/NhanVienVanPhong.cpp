#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong() : NhanVien()
{
	this->songaylamviec = 0;
	loai = NVVP;
}
int NhanVienVanPhong::getLuong()
{
	return songaylamviec * 100000;
}
void NhanVienVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec"<<endl;
	cin >> this->songaylamviec;
}
void NhanVienVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << getLuong()<<endl;
}
NhanVienVanPhong& NhanVienVanPhong :: operator = (NhanVienVanPhong& a)
{
	NhanVien ::operator=(a);
	this->songaylamviec = a.songaylamviec;
	return *this;
}