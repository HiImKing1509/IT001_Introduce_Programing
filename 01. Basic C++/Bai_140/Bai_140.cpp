#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	float D = b * b - 4 * a * c;
	if (D <= 0)
	{
		if (D == 0)
		{
			x1 = -b / 2 / a;
			x2 = -b / 2 / a;
			cout << "Nghiem cua phuong trinh la nghiem kep: ";
			cout << "x1 = x2 = " << x1;
		}
		else
			cout << "Phuong trinh vo nghiem ";
	}
	else
	{
		x1 = (-b + sqrt(D)) / 2 / a;
		x2 = (-b - sqrt(D)) / 2 / a;
		cout << "Nghiem cua phuong trinh la: ";
		cout << "\nx1 = " << x1;
		cout << "\nx2 = " << x2;
	}
	return 1;
}
