#include "CString.h"
CString::CString()
{
	this->n = 0;
}
CString:: ~CString()
{
	
}
CString& CString:: operator =(CString s)
{
	n = s.n;
	for (int i = 0; i < s.n; i++)
	{
		A[i] = s.A[i];
	}
	return *this;
}
bool CString:: operator ==(CString s)
{
	if (n != s.n) return false;
	else
	{
		for (int i = 0; i < s.n; i++)
		{
			if (A[i] != s.A[i])
			{
				return false;
			}
		}
	}
	return true;
	
}
istream& operator >>(istream& is, CString& s)
{
	cout << "Nhap do dai chuoi ki tu" << endl;
	is >> s.n;
	cout << "Nhap chuoi" << endl;
	for (int i = 0; i < s.n; i++)
	{
		is >> s.A[i];
	}
	return is;
}
ostream& operator <<(ostream& os, CString s)
{
	for (int i = 0; i < s.n; i++)
	{
		os<< s.A[i];
	}
	return os;
}
CString CString:: operator+(CString s)
{
	CString c;
	c.n = this->n + s.n;
	for (int i = 0; i < this->n; i++)
	{
		c.A[i] = this->A[i];
	}
	for (int i = n, j = 0; i < c.n, j < s.n; i++, j++)
		c.A[i] = s.A[j];
	return c;
}