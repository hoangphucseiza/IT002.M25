#include"NongTrai.h"
using namespace std;
int main()
{
	NongTrai A;
	cout << "NHAP THONG TIN NONG TRAI" << endl;
	A.Nhap();
	cout << "XUAT THONG TIN NONG TRAI" << endl;
	A.Xuat();
	cout << "Tong So Lit Sua La " << A.TongSoLitSua() << endl;
	return 0;
}