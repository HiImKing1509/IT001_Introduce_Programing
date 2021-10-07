#include <iostream>
using namespace std;
void Nhap(float&);
float Xuat(float);

int main()
{
	float x;
	Nhap(x);
	Xuat(x);

	float x9 = Xuat(x);
	cout << "x^9 = " << x9;
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
	float x5 = x4 * x;
	return x5 * x4;
}
