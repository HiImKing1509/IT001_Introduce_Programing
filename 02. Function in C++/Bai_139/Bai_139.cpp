#include <iostream>
#include <cmath>
using namespace std;
float GiaiPhuongTrinh(float, float);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	GiaiPhuongTrinh(a, b);
	if (GiaiPhuongTrinh(a, b) == 1)
		cout << "Phuong trinh co vo so nghiem";
	else if (GiaiPhuongTrinh(a, b) == 0)
		cout << "Phuong trinh vo nghiem";
	else if (GiaiPhuongTrinh(a, b) == 2)
		cout << "Phuong trinh co nghiem x = " << -b / a;

	return 1;
}
float GiaiPhuongTrinh(float i, float k)
{
	float x;
	if (i == 0)
	{
		if (k == 0)
			return 1;
		else
			return 0;
	}
	else
		x = -k / i;
	return 2;
}