#include <iostream>
using namespace std;

class CTimeSpan
{
private:
	int gio;
	int phut;
	int giay;
public:
	CTimeSpan();
	CTimeSpan(int a, int b, int c);
	void Nhap();
	void Xuat();
	int TongGiay();
	void ChuyenThoiGian();
	void setGio(int x);
	void setPhut(int x);
	void setGiay(int x);
	int getGio();
	int getGiay();
	int getPhut();
	friend CTimeSpan operator +(CTimeSpan a,CTimeSpan b);
	friend CTimeSpan operator -(CTimeSpan a, CTimeSpan b);
	bool operator ==(CTimeSpan b);
	bool operator !=(CTimeSpan b);
	bool operator >(CTimeSpan b);
	bool operator >=(CTimeSpan b);	
	bool operator <(CTimeSpan b);
	bool operator <=(CTimeSpan b);
};

