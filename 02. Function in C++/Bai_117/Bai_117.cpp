#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TinhAn(n);
	cout << "a" << "(" << n << ") = " << kq;
	return 1;
}
int TinhAn(int k)
{
	int att = -1;
	int at = 3;
	int T = 2;
	int ahh;
	for (int i = 2; i <= k; i = i + 1)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		att = at;
		at = ahh;
	}
	return ahh;
}
