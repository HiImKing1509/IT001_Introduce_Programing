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
	float s = 0;
	float t = 1;
	int m = 1;
	int dau = -1;
	for (int i = 1; i <= k; i++)
	{
		t = t * y;
		m = m * i;
		s = s + dau * t / m;
		dau = -dau;
	}
	return s;
}