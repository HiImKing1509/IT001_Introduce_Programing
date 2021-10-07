#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float LuyThua(float, int);

int main()
{
	float t;
	cout << "Nhap x: ";
	cin >> t;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << t << "^" << n << " = " << LuyThua(t, n);
	return 1;
}
float LuyThua(float x, int k)
{
	if (k == 0)
		return 1;
	return (LuyThua(x, k - 1) * x);
}