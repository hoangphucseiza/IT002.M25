#include "TAMGIAC.h"
#include<math.h>
using namespace std;

TAMGIAC::TAMGIAC()
{

 }
TAMGIAC::TAMGIAC(POINT A, POINT B, POINT C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}
TAMGIAC :: ~TAMGIAC()
{

 }
void TAMGIAC::NhapTamGiac()
{
	cout << "Nhap vao 3 diem TAM GIAC" << endl;
	cout << "Nhap diem thu nhat" << endl;
	this->A.NhapDiem();
	cout << "Nhap diem thu hai" << endl;
	this->B.NhapDiem();
	cout << "Nhap diem thu ba" << endl;
	this->C.NhapDiem();
}
void TAMGIAC::XuatTamGiac()
{

	cout << "Diem Thu Nhat la" << endl;
	this->A.XuatDiem();
	cout << "Diem Thu Hai la" << endl;
	this->B.XuatDiem();
	cout << "Diem Thu Ba la" << endl;
	this->C.XuatDiem();
}
void TAMGIAC::TinhTienTamGiac(POINT A, POINT B)
{
	this->A.TinhTien(A, B);
	this->B.TinhTien(A, B);
	this->C.TinhTien(A, B);
}
void TAMGIAC::QuayTamGiac(double goc)
{
	double radian = goc*(3.14 / 180);
	double HoanhDo_A = this->A.getHoanhDo();
	double TungDo_A = this->A.getTungDo();
	double HoanhDo_B = this->B.getHoanhDo();
	double TungDo_B = this->B.getTungDo();
	double HoanhDo_C = this->C.getHoanhDo();
	double TungDo_C = this->C.getTungDo();
	this->A.SetX(HoanhDo_A * cos(radian) - TungDo_A * sin(radian));
	this->A.SetY(HoanhDo_A * sin(radian) + TungDo_A * cos(radian));
	this->B.SetX(HoanhDo_B * cos(radian) - TungDo_B * sin(radian));
	this->B.SetY(HoanhDo_B * sin(radian) + TungDo_B * cos(radian));
	this->C.SetX(HoanhDo_C * cos(radian) - TungDo_C * sin(radian));
	this->A.SetY(HoanhDo_C * sin(radian) + TungDo_C * cos(radian));
}
void TAMGIAC::PhongToTamGiac(double k)
{
	this->A.SetX(this->A.getHoanhDo() * k);
	this->A.SetY(this->A.getTungDo() * k);
	this->B.SetX(this->B.getHoanhDo() * k);
	this->B.SetY(this->B.getTungDo() * k);
	this->C.SetX(this->C.getHoanhDo() * k);
	this->C.SetY(this->C.getTungDo() * k);
}
void TAMGIAC::ThuNhoTamGiac(double k)
{
	this->A.SetX(this->A.getHoanhDo()/ k);
	this->A.SetY(this->A.getTungDo() / k);
	this->B.SetX(this->B.getHoanhDo() / k);
	this->B.SetY(this->B.getTungDo() / k);
	this->C.SetX(this->C.getHoanhDo() / k);
	this->C.SetY(this->C.getTungDo() / k);
}
