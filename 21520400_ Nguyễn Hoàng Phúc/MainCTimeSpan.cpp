#include"CTimeSpan.h"
using namespace std;
int main()
{
	
	CTimeSpan a;
	a.Nhap();
	CTimeSpan b(0, 30, 0);
	(a + b).Xuat();
	(a - b).Xuat();
	if (a == b) cout << 1<<endl; else cout << 0 << endl;
	if (a != b) cout << 1<<endl; else cout << 0 << endl;
	if (a > b) cout << 1<<endl; else cout << 0 << endl;
	if (a >= b) cout << 1<<endl; else cout << 0 << endl;
	if (a < b) cout << 1<<endl; else cout << 0 << endl;
	if (a <= b) cout << 1<<endl; else cout << 0 << endl;
	return 0;
}