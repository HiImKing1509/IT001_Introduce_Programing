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
	cout << "Cos(x) =  " << kq;
	return 1;
}
float Tong(float k)
{
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	float e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * k * k;
		m = m * i * (i - 1);
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}

