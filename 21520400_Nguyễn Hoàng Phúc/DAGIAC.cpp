#include "DAGIAC.h"
using namespace std;
DAGIAC::DAGIAC()
{
	this->sodinh = 0;
	this->pDinh = NULL;
}
DAGIAC :: ~DAGIAC()
{
		delete[] this->pDinh;
}
void DAGIAC::Nhap()
{
	cout << "Nhap so dinh da giac" << endl;
	cin >> this->sodinh;
	this->pDinh = new POINT[this->sodinh];
	for (int i = 0; i < this->sodinh; i++)
	{
		cout << "Nhap Diem " << i + 1 << endl;
		this->pDinh[i].NhapDiem();
	}
}
void DAGIAC::Xuat()
{
	for (int i = 0; i < this->sodinh; i++)
	{
		cout << "Xuat Diem " << i + 1 << endl;
		this->pDinh[i].XuatDiem();
	}
}
void DAGIAC::TinhTienDaGiac()
{
	cout << " Nhap vector ban can tinh tien" << endl;
	POINT A; POINT B;
	A.NhapDiem();
	B.NhapDiem();
	for (int i = 0; i < this->sodinh; i++)
	{
		pDinh[i].TinhTien(A, B);
	}
}
void DAGIAC::QuayDaGiac(double goc)
{
	double radian = goc*(3.14 / 180);
	for (int i = 0; i < this->sodinh; i++)
	{
		double Hoanhdo = pDinh[i].getHoanhDo();
		double Tungdo = pDinh[i].getTungDo();
		pDinh[i].SetX(Hoanhdo * cos(radian) - Tungdo * sin(radian));
		pDinh[i].SetY(Hoanhdo * sin(radian) + Tungdo * cos(radian));
	}
}
void DAGIAC::PhongToDaGiac(double k)
{
	for (int i = 0; i < this->sodinh; i++)
	{
		pDinh[i].SetX(pDinh[i].getHoanhDo() * k);
		pDinh[i].SetY(pDinh[i].getTungDo() * k);
	}
}
void DAGIAC::ThuNhoDaGiac(double k)
{
	for (int i = 0; i < this->sodinh; i++)
	{
		pDinh[i].SetX(pDinh[i].getHoanhDo() / k);
		pDinh[i].SetY(pDinh[i].getTungDo() / k);
	}
}