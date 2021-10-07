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
	int at = -2;
	int T = 3;
	int P = 7;
	int ahh;
	for (int i = 2; i <= k; i = i + 1)
	{
		T = T * 3;
		P = P * 7;
		ahh = 5 * at + 2 * T - 6 * P + 12;
		at = ahh;
	}
	return ahh;
}
