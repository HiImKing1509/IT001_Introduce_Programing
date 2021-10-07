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
	cout << "e^x =  " << kq;
	return 1;
}
float Tong(float k)
{
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * k;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}

