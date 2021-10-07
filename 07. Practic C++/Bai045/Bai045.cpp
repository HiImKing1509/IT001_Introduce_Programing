#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: a(" << n << ") = " << Tinh(n);
	return 1;
}
float Tinh(int k)
{
	if (k == 1)
		return 2;
	return (5 * Tinh(k - 1) + sqrt(24 * Tinh(k - 1) * Tinh(k - 1) - 8));
}