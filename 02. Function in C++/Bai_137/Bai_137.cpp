#include <iostream>
#include <cmath>
using namespace std;
float TinhGiaTri(float);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	
	float f = TinhGiaTri(x);
	cout << "f(" << x << ") = " << f;
	return 1;
}
float TinhGiaTri(float k)
{
	float f;
	if (k >= 5)
		f = 2 * k * k + 5 * k + 9;
	else
		f = -2 * k * k + 4 * k - 9;
	return f;
}
