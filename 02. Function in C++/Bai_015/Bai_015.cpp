#include <iostream>
using namespace std;
void Nhap(float&);
float Xuat(float);

int main()
{
	float x;
	Nhap(x);
	Xuat(x);

	float x64 = Xuat(x);
	cout << "x^64 = " << x64;
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
	float x32 = x16 * x16;
	return x32 * x32;
}
