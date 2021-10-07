#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void DuaVeCuoi(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang A: ";
	Xuat(b, k);
	cout << endl;
	cout << "Mang sau khi sap xep la: ";
	DuaVeCuoi(b, k);
	for (int i = 0; i < k; i++)
		cout << b[i] << "   ";
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
bool KtNguyenTo(int x, int k)
{
	if (x == 2 && k % 2 != 0)
		return true;
	else
		if (x == 2 && k % 2 == 0)
			return false;
	if (k < 0)
		return false;
	if (KtNguyenTo(x - 1, k) == false)
		return false;
	if (k % x == 0)
		return false;
	else
		return true;
	return KtNguyenTo(x - 1, k);
}
void DuaVeCuoi(int a[], int n)
{
	if (n == 0)
		return;
	if (KtNguyenTo(a[n - 1] - 1, a[n - 1]))
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i < n - 1; i++)
		if (KtNguyenTo(a[i]-1,a[i]))
		{
			swap(a[n - 1], a[i]);
			break;
		}
	DuaVeCuoi(a, n - 1);
}