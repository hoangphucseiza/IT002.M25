#include<iostream>
#include"TAMGIAC.h"
using namespace std;

int main()
{
	TAMGIAC tamgiac;
	tamgiac.NhapTamGiac();
	cout << "==================XUAT TAM GIAC HIEN TAI=================" << endl;
	tamgiac.XuatTamGiac();
	POINT A(5, 6), B(7, 2);
	cout << "==================PHEP TINH TIEN=================" << endl;
	tamgiac.TinhTienTamGiac(A,B);
	tamgiac.XuatTamGiac();
	cout << "==================PHEP QUAY======================" << endl;
	tamgiac.QuayTamGiac(60);
	tamgiac.XuatTamGiac();
	cout << "==================PHONG TO TAM GIAC===============" << endl;
	tamgiac.PhongToTamGiac(2);
	tamgiac.XuatTamGiac();
	cout << "==================THU NHO TAM GIAC================" << endl;
	tamgiac.ThuNhoTamGiac(2);
	tamgiac.XuatTamGiac();
	return 0;
}