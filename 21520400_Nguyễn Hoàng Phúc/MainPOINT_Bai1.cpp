#include<iostream>
#include"POINT.h"
using namespace std;
int main() {
	POINT diem1;
	POINT diem2(0, 1), diem3(1, 2);
	diem1.NhapDiem();
	diem1.XuatDiem(); //Xuat diem 1
	cout << "Sau khi tinh tien diem 1 theo diem 2 va diem 3" << endl;
	diem1.TinhTien(diem2, diem3);
	diem1.XuatDiem(); // Diem 1 sau khi tinh tien
	return 0;
}