#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Xuatbo2(float, float);
void Lietke(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	cout << "\nBo cac so can tim la: ";
	Lietke(a, n);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}

}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];
}
void Xuatbo2(float x, float y)
{
	cout << setw(8) << setprecision(3);
	cout << "(" << x << "," << y << ")";
	cout << "\n";
}
void Lietke(float a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0;i < n - 1;i++)
	{
		if (a[i] <= a[n - 1])
			Xuatbo2(a[i], a[n - 1]);
	}
	for (int i = 0;i < n - 1;i++)
	{
		if (a[n-1] <= a[i])
			Xuatbo2(a[n-1], a[i]);
	}
	Lietke(a, n - 1);
}