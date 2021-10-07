#include <iostream>
using namespace std;
float BienDoi(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	BienDoi(a, b);
	cout << "a = " << a;
	cout << "\nb = " << b;

	return 1;
}
float BienDoi(float& a, float& b)
{
	while (a < 0)
		a = -a;
	while (b < 0)
		b = -b;
	return a, b;
}