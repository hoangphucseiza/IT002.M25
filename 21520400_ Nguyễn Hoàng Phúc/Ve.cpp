#include "Ve.h"



void Ve::Nhap()
{
	cout << "Nhap Ma Ve" << endl;
	cin.ignore();
	getline(cin, mave);
	cout << "Nhap Ho va Ten" << endl;
	getline(cin, hoten);
	cout << "Nhap Nam Sinh" << endl;
	cin >> namsinh;
}
void Ve::Xuat()
{
	cout << "Ma Ve: " << mave << endl;
	cout << "Ho Ten: " << hoten << endl;
	cout << "Nam Sinh: " << namsinh << endl;
}
LoaiVe  Ve::getLoai()
{
	return loai;
}