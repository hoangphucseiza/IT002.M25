#pragma once
#include"NhanVien.h"
class LapTrinhVien: public NhanVien
{
protected:
	int sogioovertime;
public:
	void Nhap();
	void Xuat();
	int getLuong();
};

