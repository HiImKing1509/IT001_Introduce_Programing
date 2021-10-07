#include <iostream>
#include <cmath>
using namespace std;
float Tinh(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = Tinh(x, n);
	cout << "gia tri: " << kq;
	return 0;
}
float Tinh(float x, int k)
{
	if (k == 0)
		return 1+x;
	if (k == 1)
		return 1 + x + pow(x, 3)/6;
	float a = Tinh(x, k - 1);
	float b = Tinh(x, k - 2);
	float hs = x * x / (2 * k) / (2 * k + 1);
	return (1 + hs) * a - hs * b;
}
