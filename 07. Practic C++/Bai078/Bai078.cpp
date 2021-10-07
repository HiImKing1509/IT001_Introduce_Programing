#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKeDuong(float[], int);

int main()
{
	float b[100];
	int k;
	cout << "Nhap n: ";
	cin >> k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nMang toan duong: ";
	LietKeDuong(b, k);

	return 1;
}
void Nhap(float a[], int& n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(3) << a[n - 1] << setw(10);
}
void LietKeDuong(float a[], int n)
{
	if (n == 0)
		return;
	LietKeDuong(a, n - 1);
	if (a[n - 1] > 0)
		cout << fixed << setprecision(3) << a[n - 1] << setw(10);
}
