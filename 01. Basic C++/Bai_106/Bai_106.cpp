#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = x;
	float t = x;
	int m = 1;
	int i = 1;
	float e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * 2 * i * (2 * i + 1);
		e = (float)t / m;
		s = s + dau * e;
		i = i + 1;
		dau = -dau;
	}
	cout << "\nsin(x) = " << s;
	return 1;
}