#include "Gym.h"

Gym::Gym()
{

 }
Gym:: ~Gym()
{
	for (int i = 0; i < sl_ve; i++)
	{
		if (ds[i]!= NULL) delete ds[i];
	}
	if (ds != NULL) delete ds;
}

void Gym::Nhap()
{
	cout << "Nhap So Luong Ve Da Ban" << endl;
	cin >> sl_ve;
	ds = new Ve * [sl_ve];
	for (int i = 0; i < sl_ve; i++)
	{
		cout << "Co 3 loai Ve:   1.Ve Thuong   2.Ve Vip   3.Ve Tap Thu" << endl;
		int luachon;
		cout << "Nhap loai ve" << endl;
		cin >> luachon;
		if (luachon == 1)
		{
			ds[i] = new VeThuong;
			ds[i]->Nhap();
		}
		if (luachon == 2)
		{
			ds[i] = new VeVip;
			ds[i]->Nhap();
		}
		if (luachon == 3)
		{
			ds[i] = new VeTapThu;
			ds[i]->Nhap();
		}
	}
}
void Gym::Xuat()
{
	for (int i = 0; i < sl_ve; i++)
	{
		cout << "Thong Tin Loai Ve " << i + 1 << " La" << endl;
		ds[i]->Xuat();
		cout << "--------------------" << endl;
	}
}
int Gym::TongTienBan()
{
	int tong = 0;
	for (int i = 0; i < sl_ve; i++)
	{
		tong += ds[i]->TongTien();
	}
	return tong;
}
int TimMax(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}

void Gym::TimLoaiVeMuaNhieuNhat()
{
	int tongvethuong = 0;
	int tongvevip = 0;
	int tongvetapthu = 0;
	for (int i = 0; i < sl_ve; i++)
	{
		if (ds[i]->getLoai() == Thuong)
		{
			tongvethuong++;
		}
		if (ds[i]->getLoai() == Vip)
		{
			tongvevip++;
		}
		if (ds[i]->getLoai() == TapThu)
		{
			tongvetapthu++;
		}
	}
	int nhieunhat = TimMax(tongvethuong, tongvevip, tongvetapthu);
	if (nhieunhat == tongvethuong)
	{
		cout << "Ve Thuong Ban Nhieu Nhat" << endl;
	}
	if (nhieunhat == tongvevip)
	{
		cout << "Ve Vip Ban Nhieu Nhat" << endl;
	}
	if (nhieunhat == tongvetapthu)
	{
		cout << "Ve Tap Thu Ban Nhieu Nhat" << endl;
	}
}
void Gym::TimVeThuongMenhGiaCaoNhat()
{
	int menhgia = 0;
	for (int i = 0; i < sl_ve; i++)
	{
		if (ds[i]->getLoai() == Thuong)
		{
			if (ds[i]->TongTien() > menhgia)  menhgia = ds[i]->TongTien();
		}
	}
	for (int i = 0; i < sl_ve; i++)
	{
		if (ds[i]->getLoai() == Thuong)
		{
			if (ds[i]->TongTien() == menhgia)  ds[i]->Xuat();
		}
	}
}