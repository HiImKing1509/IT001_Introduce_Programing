#include <iostream>
#include <cmath>
using namespace std;
float NhoNhat(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	float lc = NhoNhat(a, b);
	cout << "Gia tri nho nhat = " << lc;
	return 1;
}
float NhoNhat(float& a, float& b)
{
	float lc = a;
	if (lc > b)
		lc = b;
	return lc;
}
