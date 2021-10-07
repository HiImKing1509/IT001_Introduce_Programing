#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XayDungMang(int[], int, int[], int&);

int main()
{
	int b[100];
	int b1[100];
	int k, k1;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	XayDungMang(b, k, b1, k1);
	cout << "\nMang toan le cua mang ban dau: ";
	Xuat(b1, k1);
	
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
void XayDungMang(int a[], int n, int b[], int& m)
{
	if (n == 0)
		return;
	m = 0;
	XayDungMang(a, n - 1, b, m);
	if (a[n - 1] % 2 != 0)
		b[m++] = a[n - 1];
}
