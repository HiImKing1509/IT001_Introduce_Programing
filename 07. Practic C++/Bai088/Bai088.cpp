#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int);
void Xuat(float[], int);
float MAX(float[], int);
void Lietke(float[], int);
int main()
{
	float* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new float[n];
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	cout << "\nVi tri cua gia tri lon nhat trong mang la: ";
	Lietke(a, n);
	return 1;
}
void Nhap(float a[], int n)
{

	srand(std::time(nullptr));
	if (n >= 0)
	{
		Nhap(a, n - 1);
		a[n-1] = -100 + rand() / (RAND_MAX / 200.0);
	}

}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n-1];

}
float MAX(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = MAX(a, n - 1);
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}
void Lietke(float a[], int n)
{
	if (n == 0)
		return;
	float lc = MAX(a, n-1);
	Lietke(a, n - 1);
	{
		if (lc ==a[n - 1])
		{
			cout << "  " << n - 1;
			return;
		}
	}
}