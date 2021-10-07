#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TimGiaTri(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	float kq = TimGiaTri(b, k);
	cout << "\nGia tri duong nho nhat la: " << kq;
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
float TimGiaTri(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = TimGiaTri(a, n - 1);
	if (a[n - 1] < 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}