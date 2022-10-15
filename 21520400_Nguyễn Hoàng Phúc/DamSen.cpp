#include "DamSen.h"


void DamSen::Nhap()
{
	cout << "Nhap so luong ve" << endl;
	cin >> sl;
	ds = new Ve * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "Co 2 loai ve : 1.TungPhan   2.Tron Goi" << endl;
		int luachon;
		cin >> luachon;
		if (luachon == 1)
		{
			ds[i] = new VeTungPhan;
			ds[i]->Nhap();
		}
		if (luachon == 2)
		{
			ds[i] = new VeTronGoi;
			ds[i]->Nhap();
		}
	}
}
void DamSen::Xuat()
{
	for (int i = 0; i < sl; i++)
	{
		cout << "Thong Tin Ve Thu " << i + 1 << endl;
		ds[i]->Xuat();
	}
}
int DamSen::TongTien()
{
	int tong = 0;
	for (int i = 0; i < sl; i++)
	{
		tong += ds[i]->getTien();
	}
	return tong;
}
int DamSen::DemVeTungPhan()
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (ds[i]->getLoai() == TungPhan) dem++;
	}
	return dem;
}