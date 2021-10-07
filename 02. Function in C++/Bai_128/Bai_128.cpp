#include <iostream>
#include <cmath>
using namespace std;
float XuatTang(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	XuatTang(a, b);
	cout << "Thu tu tang dan: " << a<<", " <<b;
	return 1;
}
float XuatTang(float& a, float& b)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	return a,b;
}
