#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DichPhai(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	DichPhai(b, k);
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
void DichPhai(float a[], int n)
{
	cout << "\nMang dich phai xoay vong: ";
	float temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}