#include <iostream>
#include <cmath>
using namespace std;
float Tong(float, int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = Tong(x, n);
	cout << "Ket qua = " << kq;
	return 1;
}
float Tong(float y, int k)
{
	float s = -1;
	float t = 1;
	int m = 1;
	int dau = 1;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		t = t * y * y;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		dau = -dau;
	}
	return s;
}