#include <iostream>
#include <cmath>
using namespace std;
int TichSoLe(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TichSoLe(n);
	cout << "ket qua : " << kq;
	return 1;
}
int TichSoLe(int k)
{
	int T;
	k = abs(k);
	if (k <= 9)
	{
		if (k % 2 != 0)
			return k;
		else
			return 0;
	}
	T = TichSoLe(k / 10);
	int dv = k % 10;
	if (dv % 2 != 0)
		return T * dv;
	return T;
}