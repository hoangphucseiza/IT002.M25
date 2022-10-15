#include "NhanVien.h"


void NhanVien::Nhap()
{
	cout << "Nhap ma nhan vien" << endl;
	cin.ignore();
	getline(cin, manhanvien);
	cout << "Nhap ho ten" << endl;
	getline(cin, hoten);
	cout << "Nhap tuoi" << endl;
	cin >> tuoi;
	cout << "Nhap so dien thoai" << endl;
	cin >> sodienthoai;
}
void NhanVien::Xuat()
{
	cout << "Ma nhan vien: " << manhanvien << endl;
	cout << "Ho va ten: " << hoten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "SDT: " << sodienthoai << endl;
}