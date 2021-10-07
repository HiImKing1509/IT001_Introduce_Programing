#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaTrungX(int[], int&, int);

int main()
{
	int b[100];
	int k, x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\nNhap gia tri x: ";
	cin >> x;
	XoaTrungX(b, k, x);
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
		cout << a[i] << setw(6);
}
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrungX(int a[], int& n, int x)
{
	cout << "\nMang sau khi xoa: ";
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
