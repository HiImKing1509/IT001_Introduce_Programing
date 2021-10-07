#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nMang say khi them x: ";
	ThemBaoToan(b, k, x);
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
void ThemBaoToan(float a[], int& n, float x)
{
	if (n == 0)
	{
		a[0] = x;
		n++;
		return;
	}
	if (x >= a[n - 1])
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;

}