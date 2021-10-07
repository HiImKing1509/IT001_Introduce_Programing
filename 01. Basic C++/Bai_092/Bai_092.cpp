#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1 - x;
	float t = x;
	int m = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		t = t * x * x;
		m = m * 2 * i * (2 * i + 1);
		s = s + (float)dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "\ns(x,n)= " << s;
	return 1;
}