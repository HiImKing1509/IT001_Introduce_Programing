#include <iostream>
#include <cmath>
using namespace std;
float XuatTang(float&, float&, float&);

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	

	XuatTang(a, b, c);
	cout << "Thu tu tang dan: " << a << ", " << b << ", " << c;
	return 1;
}
float XuatTang(float& a, float& b, float& c)

{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	return a, b, c;
}

