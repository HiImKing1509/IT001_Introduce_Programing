#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dn = 0;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "Chu so dao nguoc cua " << n << " la: " << dn;
	return 1;
}