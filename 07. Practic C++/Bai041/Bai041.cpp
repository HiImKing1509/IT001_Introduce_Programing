#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TinhAn(n);
	cout << "ket qua : " << kq;
}
int TinhAn(int k)
{
	if (k == 1)
		return 2;
	return TinhAn(k - 1) + 2 * k + 1;
}