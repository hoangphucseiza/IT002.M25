#pragma once
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class NhanVien
{
protected:
	string manhanvien;
	string hoten;
	int tuoi;
	int sodienthoai;
	string email;
	int luongcoban;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int getLuong() = 0;
};

