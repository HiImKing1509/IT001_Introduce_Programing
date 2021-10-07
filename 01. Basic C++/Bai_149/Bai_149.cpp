#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, m, n, u;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	m = abs(a);
	n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	u = m + n;
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << u;
	return 1;
}