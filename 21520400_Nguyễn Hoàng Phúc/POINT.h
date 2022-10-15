#include<iostream>
using namespace std;
class POINT
{
private:
	double hoanhdo;
	double tungdo;
public:
	POINT();
	POINT(double a, double b);
	void setHoanhDo();
	void setTungDo();
	double getHoanhDo();
	double getTungDo();
	void TinhTien(POINT a, POINT b);
	void NhapDiem();
	void XuatDiem();
	void SetX(double x);
	void SetY(double y);
};

