#pragma once
#include"NhanVien.h"
class KiemChungVien : public NhanVien
{
protected:
	int soloi;
public:
	void Nhap();
	void Xuat();
	int getLuong();
};

