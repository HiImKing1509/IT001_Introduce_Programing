#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100], b[100];
	int k, t;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k);

	cout << "\n\nMang thu 2 gom gia tri am cua cua mang 1: ";
	XayDung(a, k, b, t);
	Xuat(b, t);

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
void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[k++] = a[i];
		}
	}
}