#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int,int[],int&);

int main()
{
	int b[100];
	int a[100];
	int k;
	int h ;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDay cac so nguyen to la: ";
	XayDung(a, k,b,h);
	for (int i = 0; i < h; i++)
		cout << b[i] << "   ";
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
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
bool KtNguyenTo(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return false;
	return true;
}
void XayDung(int a[], int n, int b[], int& m)
{
	if (n == 0)
	{
		m = 0;
		return;
	}
		if (KtNguyenTo(a[n - 1]))
	{
		cout << a[n - 1] << "    ";
		b[m++] = a[n - 1];
	}
		XayDung(a, n - 1, b, m);
}