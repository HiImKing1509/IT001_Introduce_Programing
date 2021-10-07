#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int x;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nMang say khi xoa vi tri x: ";
	XoaViTri(b, k, x);
	for (int i = 0; i < k; i++)
		cout << b[i] << "   ";
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
void XoaViTri(float a[], int& n, int x)
{
	if (x == n-1)
	{
		n--;
		return;
	}
	a[x] = a[x + 1];
	XoaViTri(a, n, x+1);

}