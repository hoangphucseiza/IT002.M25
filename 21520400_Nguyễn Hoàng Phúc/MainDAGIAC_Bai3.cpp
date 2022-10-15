#include<iostream>
#include"DAGIAC.h"
using namespace std;
int main()
{
	DAGIAC dagiac;
	dagiac.Nhap();
	dagiac.Xuat();
	dagiac.TinhTienDaGiac();
	cout << " DA GIAC SAU KHI TINH TIEN LA" << endl;
	dagiac.Xuat();
	dagiac.PhongToDaGiac(2);
	cout << " DA GIAC SAU KHI PHONG TO LA" << endl;
	dagiac.Xuat();
	dagiac.ThuNhoDaGiac(3);
	cout << " DA GIAC SAU KHI THU NHO LA" << endl;
	dagiac.Xuat();
	dagiac.QuayDaGiac(60);
	cout << " DA GIAC SAU KHI QUAY LA" << endl;
	dagiac.Xuat();
	return 0;
}