#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float TinhSn(float, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float y;
	cout << "Nhap x: ";
	cin >> y;

	cout << "Ket qua: ";
	cout << "S(" << y << "," << n << ") = " << TinhSn(y, n);
	return 1;
}
float TinhSn(float x, int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return x;
	float a = TinhSn(x, k - 1);
	float b = TinhSn(x, k - 2);
	return ((1 + x / k) * a - (x / k) * b);
}