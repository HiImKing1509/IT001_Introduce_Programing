#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: ";
	cout << "a(" << n << ") = " << TinhAn(n);
	return 1;
}
int TinhAn(int k)
{
	if (k == 0)
		return -1;
	if (k == 1)
		return 3;
	int a = TinhAn(k - 1);
	int b = TinhAn(k - 2);
	return (5 * a + 6 * b);
}
