#include <iostream>
using namespace std;
void Nhap(int&);
int DonVi(int);

int main()
{
	int n;
	Nhap(n);
	DonVi(n);

	float dv = DonVi(n);
	cout << "Chu so hang don vi cua " << n << " la: " << dv;
	return 1;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int DonVi(int n)
{
	return n % 10;
}