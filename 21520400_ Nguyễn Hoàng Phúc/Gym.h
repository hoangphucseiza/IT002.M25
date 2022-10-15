#pragma once
#include"Ve.h"
#include"VeVip.h"
#include"VeTapThu.h"
#include"VeThuong.h"
class Gym
{
private:
	int sl_ve;
	Ve** ds;
public:
	Gym();
	~Gym();
	void Nhap();
	void Xuat();
	int TongTienBan();
	void TimLoaiVeMuaNhieuNhat();
	void TimVeThuongMenhGiaCaoNhat();
};

