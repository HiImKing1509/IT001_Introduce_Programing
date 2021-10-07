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
	float s = 1 + y;
	float t = y;
	int m = 1;
	for (int i = 1; i <= k; i++)
	{
		m = m * 2 * i * (2 * i + 1);
		t = t * y * y;
		s = s + t / m;
	}
	return s;
}