#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: a(" << n << ") = " << Tinh(n);
	return 1;
}
int Tinh(int k)
{
	if (k == 1)
		return -2;
	return (5 * Tinh(k - 1) + 12);
}