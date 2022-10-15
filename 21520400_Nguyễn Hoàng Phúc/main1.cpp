#include <iostream>
#include"DamSen.h"
using namespace std;
int main()
{
    DamSen A;
    cout << "=========NHAP THONG TIN========" << endl;
    A.Nhap();
    cout << "===========XUAT THONG TIN=========" << endl;
    A.Xuat();
    cout << "Tong Tien Cong Ty Kiem Duoc La = " << A.TongTien()<<endl;
    cout << "So Ve Tung Phan La = " << A.DemVeTungPhan();
    return 0;
}
