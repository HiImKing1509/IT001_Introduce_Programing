#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TinhSn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: ";
	cout << "S(" << n << ") = " << TinhSn(n);
	return 1;
}
int TinhSn(int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return 1;
	int a = TinhSn(k - 1);
	int b = TinhSn(k - 2);
	return ((k + 1) * a - k * b);
}