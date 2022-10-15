#pragma once
#include<iostream>
#include<string>
#include<string.h>
enum LoaiVe{Thuong,Vip,TapThu};
using namespace std;
class Ve
{
protected:
	string mave;
	string hoten;
	int namsinh;
	int sodichvu;
	int giave;
	LoaiVe loai;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual LoaiVe getLoai();
	virtual int TongTien() = 0;
};

