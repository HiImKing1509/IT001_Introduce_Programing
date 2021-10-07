#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LanCanChan(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nCac gia tri chan co lan can it nhat la 1 so chan: ";
	LanCanChan(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
void LanCanChan(int a[], int n)
{
	if (n <= 1)
		return;
	LanCanChan(a, n - 1);
	if ((a[n - 2] % 2 == 0 || a[n] % 2 == 0) && a[n - 1] % 2 == 0)
	{
		cout << a[n - 1] << setw(6);
	}
}
