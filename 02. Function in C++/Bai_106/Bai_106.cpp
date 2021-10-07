#include <iostream>
#include <cmath>
using namespace std;
float Tong(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = Tong(x);
	cout << "Sin(x) =  " << kq;
	return 1;
}
float Tong(float k)
{
	float s = k;
	float t = k;
	int m = 1;
	int i = 1;
	float e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * k * k;
		m = m * 2 * i * (2 * i + 1);
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 1;
	}
	return s;
}

