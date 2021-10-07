#include <iostream>
using namespace std;
void Nhap(float&);
float Xuat(float);

int main()
{
	float x;
	Nhap(x);
	Xuat(x);

	float x32 = Xuat(x);
	cout << "x^32 = " << x32;
	return 1;
}
void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float Xuat(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	return x16 * x16;
}
