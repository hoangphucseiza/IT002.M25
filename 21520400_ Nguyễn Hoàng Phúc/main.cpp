#include <iostream>
#include"Gym.h"
using namespace std;
int main()
{
	Gym A;
	cout << "===========NHAP THONG TIN CHO PHONG GYM===============" << endl;
	A.Nhap();
	cout << "=============XUAT THONG TIN CHO PHONG GYM===============" << endl;
	A.Xuat();
	cout << "=============TONG TIEN============ " << endl;
	cout << "Tong Tien Ban Duoc = " << A.TongTienBan() << endl;
	cout << "=============TIM LOAI VE NHIEU NGUOI MUA NHAT============" << endl;
	A.TimLoaiVeMuaNhieuNhat();
	cout << "==============TIM VE THUONG CO MENH GIA CAO NHAT============" << endl;
	A.TimVeThuongMenhGiaCaoNhat();
	return 0;
}
