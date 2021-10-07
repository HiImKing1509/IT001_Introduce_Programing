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
	float s = 1 / y;
	float m = y;
	for (int i = 1; i <= k; i++)
	{
		m = m * (y + i);
		s = s + 1 / m;
	}
	return s;
}