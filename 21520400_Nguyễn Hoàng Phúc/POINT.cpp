#include "POINT.h"
using namespace std;
POINT::POINT()
{
	
};
 POINT ::POINT(double a, double b )
{
	 this->tungdo = a;
	 this->hoanhdo = b;
};
void POINT::setHoanhDo() {
	cin >> this->hoanhdo;
}
void POINT::setTungDo() {
	cin >> this->tungdo;
}
double POINT::getHoanhDo()
{
	return this->hoanhdo;
}
double POINT::getTungDo()
{
	return this->tungdo;
}
void POINT::TinhTien(POINT a, POINT b)
{
	this->hoanhdo = this->hoanhdo + (b.hoanhdo - a.hoanhdo);
	this->tungdo = this->tungdo + (b.tungdo - a.tungdo);
}
void  POINT::NhapDiem()
{
	cout << "Nhap hoanh do" << endl;
	setHoanhDo();
	cout << "Nhap tung do" << endl;
	setTungDo();
}
void  POINT::XuatDiem()
{
	cout << "Hoanh do la " << getHoanhDo() << endl;
	cout << "Tung do la " << getTungDo() << endl;;
}
// Hàm thay đổi giá trị x và y khi truyền vào ()
void POINT::SetX(double x)
{
	this->hoanhdo = x;
} 
void POINT::SetY(double y)
{
	this->tungdo = y;
}