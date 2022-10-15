#include"SoPhuc.h"
using namespace std;
int main()
{
	SoPhuc sp1;
	cout << "Nhap so phuc thu nhat" << endl;
	cin >> sp1;
	cout << sp1;
	SoPhuc sp2(3, 4);
	cout << sp1 + sp2;
	cout << sp1 - sp2;
	cout << sp1 * sp2;
	cout << sp1 / sp2;
	return 0;
}