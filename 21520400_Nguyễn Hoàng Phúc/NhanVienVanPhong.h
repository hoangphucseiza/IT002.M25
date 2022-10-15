#include<iostream>
#include"NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
private:
	int songaylamviec;
public:
	NhanVienVanPhong();
	void Nhap();
	void Xuat();
	int getLuong();
	NhanVienVanPhong& operator = (NhanVienVanPhong & a);
};

