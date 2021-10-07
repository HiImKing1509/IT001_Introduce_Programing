#include <iostream>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b; 
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "\na = " << a;
	cout << "\nb = " << b;
	return 1;
}