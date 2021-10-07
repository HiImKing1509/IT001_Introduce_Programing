#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau:" << endl;
	Xuat(b, k);

	cout << "\nMang sau khi xoa:" << endl;
	XoaAm(b, k);
	Xuat(b, k);

	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << fixed << setprecision(2) << a[i];
}
void XoaViTri(float a[], int& n, int vt)
{
	if (vt == n - 1)
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt + 1);
}
void XoaAm(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
		{
			XoaViTri(a, n, i);
		}
}
