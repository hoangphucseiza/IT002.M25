#include "CTimeSpan.h"
CTimeSpan::CTimeSpan()
{
	this->gio = 0;
	this->phut = 0;
	this->giay = 0;
}
CTimeSpan::CTimeSpan(int a, int b, int c)
{
	this->gio = a;
	this->phut = b;
	this->giay = c;
}
int CTimeSpan :: TongGiay()
{
	return gio * 3600 + phut * 60 + giay;
}
void CTimeSpan::ChuyenThoiGian()
{
	if (giay >= 60)
	{
		phut = phut + giay / 60;
		giay = giay % 60;
	}
	if (phut >= 60)
	{	
		gio = gio + phut / 60;
		phut = phut % 60;
	}
}
void CTimeSpan::setGio(int x)
{
	this->gio = x;
}
void CTimeSpan::setPhut(int x)
{
	this->phut = x;
}
void CTimeSpan::setGiay(int x)
{
	this->giay = x;
}
int CTimeSpan::getGio()
{
	return gio;
}
int CTimeSpan::getGiay()
{
	return giay;
}
int CTimeSpan::getPhut()
{
	return phut;
}
 CTimeSpan operator +(CTimeSpan a,CTimeSpan b)
 {
	 CTimeSpan c;
	 c.giay = a.giay + b.giay;
	 c.phut = a.phut + b.phut;
	 c.gio = a.gio + b.gio;
	 c.ChuyenThoiGian();
	 return c;
}
 CTimeSpan operator -(CTimeSpan a, CTimeSpan b)
{
	 CTimeSpan c;
	 c.gio = 0;
	 c.phut = 0;
	 c.giay = a.TongGiay() - b.TongGiay();
	 c.ChuyenThoiGian();
	 return c;
}
 void CTimeSpan::Xuat()
 {
	 cout << this->gio << "h" << this->phut << "p" << this->giay << "s" << endl;
 }
 void CTimeSpan::Nhap()
 {
	 cout << "Nhap gio" << endl;
	 cin >> this->gio;
	 cout << "Nhap phut" << endl;
	 cin >> this->phut;
	 cout << "Nhap giay" << endl;
	 cin >> this->giay;
 }
bool CTimeSpan:: operator ==(CTimeSpan b)
{
	if (this->gio == b.gio && this->phut == b.phut && this->giay == b.giay) return true;
	else return false;
}
bool CTimeSpan :: operator !=(CTimeSpan b)
{
	if (this->gio != b.gio || this->phut || b.phut && this->giay || b.giay) return true;
	else return false;
}
bool CTimeSpan :: operator >(CTimeSpan b)
{
	if (this->gio > b.gio)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut > b.phut)
	{
		return true;
	}
    if (this->gio == b.gio && this->phut == b.phut && this->giay > b.giay)
	{
		 return true;
	}
	return false;
}
bool CTimeSpan :: operator >=(CTimeSpan b)
{
	if (this->gio >= b.gio)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut >= b.phut)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut == b.phut && this->giay >= b.giay)
	{
		return true;
	}
	return false;
}
bool CTimeSpan :: operator <(CTimeSpan b)
{
	if (this->gio < b.gio)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut < b.phut)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut == b.phut && this->giay < b.giay)
	{
		return true;
	}
	return false;
}
bool CTimeSpan :: operator <=(CTimeSpan b)
{
	if (this->gio <= b.gio)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut <= b.phut)
	{
		return true;
	}
	if (this->gio == b.gio && this->phut == b.phut && this->giay <= b.giay)
	{
		return true;
	}
	return false;
}