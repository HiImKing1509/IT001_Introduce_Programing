#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void SapTang(int[], int);
void SapGiam(int[], int);
void Tron(int[], int, int[], int, int[], int&);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	cout << "Mang thu 1: ";
	SapTang(a, k);
	Xuat(a, k);
	cout << endl;

	int b[100];
	int t;
	Nhap(b, t);
	cout << "Mang thu 2: ";
	SapTang(b, t);
	Xuat(b, t);
	cout << endl;

	int c[300];
	int l;
	cout << "\nMang tron giam dan: ";
	Tron(a, k, b, t, c, l);
	Xuat(c, l);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
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
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void SapTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
void SapGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
}
void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] > b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
	SapGiam(c, p);
}
