#include <iostream>
using namespace std;
int HoanVi(int&, int&);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	HoanVi(a, b);

	cout << "Hoan vi";
	cout << "\na = " << a;
	cout << "\nb = " << b;
	return 1;
}
int HoanVi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return a, b;
}