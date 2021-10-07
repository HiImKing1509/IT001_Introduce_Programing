#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua T(" << n << ") = " << Tich(n);
	return 1;
}
float Tich(int k)
{
	if (k == 0)
		return 1;
	return (Tich(k - 1) * (1 + (float)1 / k / k));
}