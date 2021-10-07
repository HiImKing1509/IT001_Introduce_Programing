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
	int ln;
	k = abs(k);
	if (k == 0)
		return 0;
	ln = ChuSoLonNhat(k / 10);
	int dv = k % 10;
	if (dv > ln)
		ln=dv;
	return ln;
}