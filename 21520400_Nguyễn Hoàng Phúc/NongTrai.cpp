#include "NongTrai.h"



NongTrai::NongTrai()
{

}
 NongTrai :: ~NongTrai()
{
	 for (int i = 0; i < slgs; i++)
	 {
		 if (dsgs[i] != NULL) delete dsgs[i];
	 }
	 if(dsgs != NULL) delete dsgs;
}
void NongTrai:: Nhap()
{
	cout << "NHAP SO LUONG GIA SUC TRONG NONG TRAI" << endl;
	cin >> slgs;
	dsgs = new GiaSuc *[slgs];
	for (int i = 0; i < slgs; i++)
	{
		cout << "NHAP THONG TIN GIA SUC THU " << i + 1 << endl;
		cout << "1.Bo" << endl;
		cout << "2.Cuu" << endl;
		cout << "3.De" << endl;
		int luachon;
		cin >> luachon;
		if (luachon == 1)
		{
			dsgs[i] = new Bo;
			dsgs[i]->Nhap();
		}
		if (luachon == 2)
		{
			dsgs[i] = new Cuu;
			dsgs[i]->Nhap();
		}
		if (luachon == 3)
		{
			dsgs[i] = new De;
			dsgs[i]->Nhap();
		}
	}
}
void NongTrai::Xuat()
{
	for (int i = 0; i < slgs; i++)
	{
		cout << "THONG TIN GIA SUC THU " << i + 1 << endl;
		dsgs[i]->Xuat();
	}
}
int NongTrai::TongSoLitSua()
{
	int tonglitsua = 0;
	for (int i = 0; i < slgs; i++)
	{
		tonglitsua += dsgs[i]->getLitSua();
	}
	return tonglitsua;
}