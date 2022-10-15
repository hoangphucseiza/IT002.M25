#include <iostream>
#include<string>
#include<string.h>
using namespace std;
class CString
{
private:
	char A[1000];
	int n;
public:
	CString();
	virtual ~CString();
	friend istream& operator >>(istream& is, CString& s);
	friend ostream& operator <<(ostream& os, CString s);
	CString& operator =(CString s);
	bool operator==(CString s);
	CString operator+(CString s);
};