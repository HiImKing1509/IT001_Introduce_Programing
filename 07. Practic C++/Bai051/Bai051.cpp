#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: ";
	cout << "\na(" << n << ") = " << TinhAn(n);
	cout << "\nb(" << n << ") = " << TinhBn(n);
	return 1;
}
int TinhAn(int t)
{
	if (t == 1)
		return 2;
	int a = TinhAn(t - 1);
	int b = TinhBn(t - 1);
	return (3 * b + 2 * a);
}
int TinhBn(int t)
{
	if (t == 1)
		return 1;
	int a = TinhAn(t - 1);
	int b = TinhBn(t - 1);
	return (a + 3 * b);
}

