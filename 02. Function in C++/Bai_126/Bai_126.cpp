#include <iostream>
#include <cmath>
using namespace std;
float LonNhat(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	float lc = LonNhat(a, b);
	cout << "Gia tri lon nhat = " << lc;
	return 1;
}
float LonNhat(float& a, float& b)
{
	float lc = a;
	if (lc < b)
		lc = b;
	return lc;
}
