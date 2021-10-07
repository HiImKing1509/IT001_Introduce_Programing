#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&);
float GiaiPhuongTrinhX1(float, float, float);
float GiaiPhuongTrinhX2(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	float X1 = GiaiPhuongTrinhX1(a, b, c);
	float X2 = GiaiPhuongTrinhX2(a, b, c);

	if (X1 == 0 && X2 == 0)
		cout << "Phuong trinh vo nghiem";
	else if (X1 == 1 && X2 == 1)
		cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / a / 2;
	else
		cout << "Phuong trinh co hai nghiem phan biet x1 = " << X1 << ", x2 = " << X2;

	return 1;
}
void Nhap(float& a, float& b, float& c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
float GiaiPhuongTrinhX1(float a, float b, float c)
{
	float x1;
	float dt = b * b - 4 * a * c;
	if (dt <= 0)
	{
		if (dt == 0)
			return 1;
		else
			return 0;
	}
	else
		x1 = (-b + sqrt(dt)) / a / 2;
	return x1;
}
float GiaiPhuongTrinhX2(float a, float b, float c)
{
	float x2;
	float dt = b * b - 4 * a * c;
	if (dt <= 0)
	{
		if (dt == 0)
			return 1;
		else
			return 0;
	}
	else
		x2 = (-b - sqrt(dt)) / a / 2;
	return x2;
}