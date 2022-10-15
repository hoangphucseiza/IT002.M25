#include"CString.h"
using namespace std;
int main()
{
	CString c;
	cin >> c;
	cout << c<<endl;
	CString d;
	d = c;
	cout << d<<endl;
	if (c == d) cout << "yes"; else cout << "no"<<endl;
	CString e = c + d;
	cout << e;
	return 0;
}