#pragma once
#include"KiemChungVien.h"
#include"LapTrinhVien.h"
#include"NhanVien.h"
class CongTy
{
private:
	int sl;
	NhanVien** ds;
public:
	void Nhap();
	void Xuat();
	void DanhSachNhanVienDuoiTrungBinh();
};

