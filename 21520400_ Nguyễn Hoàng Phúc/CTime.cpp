#include "CTime.h"

istream&  operator>>(istream& is, CTime& a)
{
	is >> a.gio >> a.phut >> a.giay;
	return is;
}
ostream&  operator <<(ostream& os, CTime a)
{
	os << a.gio << "h" << a.phut << "p" << a.giay << "s";
	return os;
}

int CTime::TongGiay()
{
	return gio * 3600 + phut * 60 + giay;
}
void CTime::ChuyenThoiGian()
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
CTime CTime::  operator +(int giay)
{
	this->giay += giay;
	this->ChuyenThoiGian();
	return *this;
}
CTime CTime :: operator -(int giay)
{
	int tam = this->TongGiay();
	CTime c;
	c.gio = 0;
	c.phut = 0;
	c.giay = tam - giay;
	c.ChuyenThoiGian();
	return c;

}
CTimeSpan operator -(CTime a, CTime b)
{
	int tam1 = a.TongGiay();
	int tam2 = b.TongGiay();
	CTimeSpan c;
	c.setGio(0);
	c.setPhut(0);
	c.setPhut(tam1 - tam2);
	c.ChuyenThoiGian();
	return c;

}
CTime CTime :: operator +(CTimeSpan a)
{
	gio = gio + a.getGio();
	phut = phut + a.getPhut();
	giay = giay + a.getGiay();
	this->ChuyenThoiGian();
	return *this;
}
CTime CTime :: operator ++()
{
	this->giay++;
	this->ChuyenThoiGian();
	return *this;
}
CTime CTime :: operator --()
{
	int tam = this->TongGiay();
	CTime c;
	c.gio = 0;
	c.phut = 0;
	c.giay = tam - 1;
	c.ChuyenThoiGian();
	return c;
}