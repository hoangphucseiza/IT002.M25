#pragma once
#include"Ve.h"
#include"VeTronGoi.h"
#include"VeTungPhan.h"
class DamSen
{
private:
	int sl;
	Ve** ds;
public:
	void Nhap();
	void Xuat();
	int TongTien();
	int DemVeTungPhan();
};

