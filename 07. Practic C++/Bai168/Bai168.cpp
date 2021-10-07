#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void MotVeDau(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	MotVeDau(b, k);
	cout << "\nMang sap xep: ";
	Xuat(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) + -100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
void MotVeDau(int a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[n - 1] == 1 && a[i] != 1)
			swap(a[n - 1], a[i]);
	}
	MotVeDau(a, n - 1);
}
