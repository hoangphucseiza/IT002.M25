#pragma once
#include<iostream>
#include<string>
#include<string.h>
enum LoaiVe{TronGoi,TungPhan};
using namespace std;
class Ve
{
protected:
	string mave;
	string chuve;
	int namsinh;
	int sotrochoi;
	int giave;
	LoaiVe loai;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int getTien() = 0;
	virtual LoaiVe getLoai() =0;
};

