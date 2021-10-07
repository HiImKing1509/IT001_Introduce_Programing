#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void SapTang(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nSap xep mang tang dan: ";
	Xuat(b, k);

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
void SapTang(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n ; i++)
	{
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	SapTang(a, n - 1);
}
