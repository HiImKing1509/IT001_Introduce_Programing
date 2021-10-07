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
	float s = -1;
	float t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << "\ns(x,n)= " << s;
	return 1;
}