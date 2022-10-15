#include "CongTy.h"


void CongTy::Nhap()
{
	cout << "Nhap so luong nhan vien" << endl;
	cin >> sl;
	ds = new NhanVien * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "Co 2 loai nhan vien :  1. Lap Trinh Vien    2.Kiem Chung Vien" << endl;
		int luachon;
		cout << "Nhap lua chon" << endl;
		cin >> luachon;
		if (luachon == 1)
		{
			ds[i] = new LapTrinhVien;
			ds[i]->Nhap();
		}
		if (luachon == 2)
		{
			ds[i] = new KiemChungVien;
			ds[i]->Nhap();
		}
	}
}
void CongTy::Xuat()
{
	for (int i = 0; i < sl; i++)
	{
		cout << "Nhan Vien Thu " << i + 1 << " La" << endl;
		ds[i]->Xuat();
	}
}
void CongTy::DanhSachNhanVienDuoiTrungBinh()
{
	int luongtrungbinh = 0;
	for (int i = 0; i < sl; i++)
	{
		luongtrungbinh += ds[i]->getLuong();
	}
	luongtrungbinh = luongtrungbinh / sl;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLuong() < luongtrungbinh) ds[i]->Xuat();
	}
}