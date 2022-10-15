#include<iostream>
#include"POINT.h"
using namespace std;
class TAMGIAC
{
private:
	POINT A, B, C;
public:
	TAMGIAC();
	TAMGIAC(POINT A, POINT B, POINT C);
	~TAMGIAC();
	void NhapTamGiac();
	void XuatTamGiac();
	void TinhTienTamGiac(POINT A, POINT B);
	void QuayTamGiac(double goc);
	void PhongToTamGiac(double k);
	void ThuNhoTamGiac(double k);
};

