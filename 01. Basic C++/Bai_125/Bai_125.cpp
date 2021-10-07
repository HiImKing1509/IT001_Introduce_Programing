#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "\na = " << a;
	cout << "\nb = " << b;
	return 1;
}