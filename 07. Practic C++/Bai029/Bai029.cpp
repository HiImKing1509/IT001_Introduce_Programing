#include <iostream>
#include <cmath>
using namespace std;
int ChuSoLonNhat(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = ChuSoLonNhat(n);
	cout << "ket qua : " << kq;
	return 1;
}
int ChuSoLonNhat(int k)
{
	int lc;
	k = abs(k);
	if (k < 10)
		return k;
	lc = ChuSoLonNhat(k / 10);
	int dv = k % 10;
	if (dv < lc)
		lc = dv;
	return lc;
}