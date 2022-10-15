#include <iostream>
#include"CongTy.h"
using namespace std;
int main()
{
    CongTy A;
    cout << "================NHAP THONG TIN============" << endl;
    A.Nhap();
    cout << "=====XUAT THONG TIN=======" << endl;
    A.Xuat();
    cout << "=============DANH SACH NHAN VIEN LUONG DUOI TB==========" << endl;
    A.DanhSachNhanVienDuoiTrungBinh();
    return 0;
}
