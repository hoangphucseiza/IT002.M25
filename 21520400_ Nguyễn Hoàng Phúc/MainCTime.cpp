#include"CTime.h"
#include"CTimeSpan.h"

using namespace std;
int main()
{
	CTime a;
	cout << "Nhap time 1" << endl;
	cin >> a;
	cout << a;
	cout << a + 100;
	cout << a - 100;
	return 0;
}