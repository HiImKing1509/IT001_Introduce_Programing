#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&);
int TanSuat(float[], int, float);
void XoaPhanTu(float[], int&);

int main()
{
	float b[100];
	int k, t;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	XoaPhanTu(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void XoaPhanTu(float a[], int& n)
{
	cout << "\n\nMang sau khi xoa: ";
	for (int i = n - 1; i >= 0; i--)
		if (TanSuat(a, n, a[i]) > 1)
			XoaTrung(a, n, a[i]);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}