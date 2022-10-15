#pragma once
#include<iostream>
#include<string.h>
#include <string>
using namespace std;
enum LoaiGiaSuc{B,C,D};
class GiaSuc
{
private:
	int soluongsinhcon;
protected:
	int litsua;
	string tiengkeu;
	LoaiGiaSuc loai;
public:
	GiaSuc();
	virtual void Nhap();
	virtual void Xuat();
	virtual int getLitSua();
	LoaiGiaSuc getLoai();
	virtual string getTiengkeu();
};

