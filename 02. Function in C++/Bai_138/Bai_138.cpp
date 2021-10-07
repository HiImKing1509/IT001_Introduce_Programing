#include <iostream>
#include <cmath>
using namespace std;
float TinhGiaTri(float);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;

	float f = TinhGiaTri(x);
	cout << "f(" << x << ") = " << f;
	return 1;
}
float TinhGiaTri(float k)
{
	float f;
	if (k <= 1)
	{
		if (0 <= k && k <= 1)
			f = 5 * k - 7;
		else
			f = -2 * k * k * k + 6 * k + 9;
	}
	else
		f = 2 * k * k * k + 5 * k * k - 8 * k + 3;
	return f;
}
