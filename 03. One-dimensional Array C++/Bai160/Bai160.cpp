#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float b[100];
	int k, t;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nNhap vi tri can xoa: ";
	cin >> t;
	XoaViTri(b, k, t);
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
	cout << "\nMang sau khi xoa: ";
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}