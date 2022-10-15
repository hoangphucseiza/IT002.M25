#include"POINT.h"
using namespace std;
class DAGIAC
{
private:
	int sodinh;
	POINT* pDinh;
public:
	DAGIAC();
	~DAGIAC();
	void Nhap();
	void Xuat();
	void TinhTienDaGiac();
	void QuayDaGiac(double goc);
	void PhongToDaGiac(double k);
	void ThuNhoDaGiac(double k);
};

