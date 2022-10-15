#include "Ve.h"


void Ve::Nhap()
{
	cout << "Nhap ma ve" << endl;
	cin.ignore();
	getline(cin, mave);
	cout << "Nhap Ho va ten chu ve" << endl;
	getline(cin, chuve);
	cout << "Nhap nam sinh" << endl;
	cin >> namsinh;
}
void Ve::Xuat()
{
	cout << "Ma ve: " << mave << endl;
	cout << "Ho va Ten chu ve: " << chuve << endl;
	cout << "Nam sinh la: " << namsinh << endl;
	
}