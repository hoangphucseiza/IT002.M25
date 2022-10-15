#include<iostream>
#include"NhanVien.h"
using namespace std;
class NhanVienSanXuat :public NhanVien
{
private:
	int sosanpham;
public:
	NhanVienSanXuat();
	void Nhap();
	void Xuat();
	int getLuong();
	NhanVienSanXuat& operator =(NhanVienSanXuat& a);
};

