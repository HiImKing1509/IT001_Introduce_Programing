#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int t = a;
	a = b;
	b = t;
	cout << "Hoan doi gia tri:";
	cout << "\na = " << a;
	cout << "\nb = " << b;
	return 1;
}