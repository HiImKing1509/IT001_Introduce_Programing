#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void SapTang(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nMang chan le tang dan: ";
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
void SapTang(int a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0)
		{
			if (a[i] > a[n - 1])
				swap(a[i], a[n - 1]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[n - 1] % 2 != 0)
		{
			if (a[i] > a[n - 1])
				swap(a[i], a[n - 1]);
		}
	}
	SapTang(a, n - 1);
}