#include"CTimeSpan.h"
#include<iostream>
using namespace std;
class CTime
{
private:
	int gio;
	int phut;
	int giay;
public:
	friend istream& operator >>(istream& is, CTime& a);
	friend ostream& operator <<(ostream& os, CTime a);
	int TongGiay();
	void ChuyenThoiGian();
	CTime operator +(int giay);
	CTime operator -(int giay);
	/*friend CTimeSpan operator-(CTime a ,CTime b);*/
	CTime operator +(CTimeSpan a);
	CTime operator ++();
	CTime operator --();
};

