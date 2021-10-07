#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float Tich(float, int);

int main()
{
	float t;
	cout << "Nhap x: ";
	cin >> t;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua T(" << t << "," << n << ") = " << Tich(t, n);
	return 1;
}
float Tich(float x, int k)
{
	if (k == 0)
		return x;
	return (Tich(x, k - 1) * (x + k));
}