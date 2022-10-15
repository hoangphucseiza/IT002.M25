#include <iostream>
#include"CongTy.h"
using namespace std;
int main()
{
	CongTy A;
	A.Nhap();
	cout << "==============XUAT NHAN VIEN=================" << endl;
	A.Xuat();
	cout << "================TONG LUONG CONG TY PHAI TRA==============" << endl;
	cout << "Tong Luong Cong Ty Can Phai Tra La " << A.TongLuongPhaiTra() << endl;
	cout << "================NHAN VIEN CO LUONG CAO NHAT==============" << endl;
	cout << "Nhan Vien Co Luong Cao Nhat La ";  A.NhanVienCaoNhat()->Xuat();  cout << endl;
	cout << "================NHAN VIEN CO LUONG THAP NHAT==============" << endl;
	cout << "Nhan Vien Co Luong Thap Nhat La ";  A.NhanVienThapNhat()->Xuat();  cout << endl;
	cout << "================SAP XEP NHAN VIEN THEO THU TU GIAM DAN==============" << endl;
	cout << "Sap Xep Va Xuat Ra Theo Thu Tu Giam Dan La "; A.SapXepVaXuatRaTheoGiamDan();
	return 0;
}
