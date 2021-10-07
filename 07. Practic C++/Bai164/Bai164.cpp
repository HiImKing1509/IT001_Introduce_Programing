#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void DuongTang(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDay sau khi sap xep la: ";
	DuongTang(b, k);
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
void DuongTang(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n - 1; i++)
		if (a[n - 1] > 0 && a[i] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	DuongTang(a, n - 1);
}