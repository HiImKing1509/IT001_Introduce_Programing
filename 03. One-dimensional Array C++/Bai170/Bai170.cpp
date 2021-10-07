#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTang(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float b[100];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	SapTang(b, k);

	cout << "\n\nNhap gia tri can them: ";
	cin >> x;

	ThemBaoToan(b, k, x);
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
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void SapTang(float a[], int n)
{
	cout << "\n\nMang tang dan: ";
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << a[i] << " " << setw(9);
}
void ThemBaoToan(float a[], int& n, float x)
{
	cout << "\nMang sau khi them: ";
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}