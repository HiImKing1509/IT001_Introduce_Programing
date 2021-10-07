#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float[], int, float&, float&);

int main()
{
	float b[100];
	int k;
	float x, y;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimDoan(b, k, x, y);
	cout << "\nDoan chua tat ca cac gia tri cua mang la: [" << NhoNhat(b, k) << ", " << LonNhat(b, k) << "]";
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
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void TimDoan(float a[], int n, float& x, float& y)
{
	x = NhoNhat(a, n);
	y = LonNhat(a, n);
}
