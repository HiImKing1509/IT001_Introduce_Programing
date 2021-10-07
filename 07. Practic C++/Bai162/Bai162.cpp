#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void SapTang(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nMang nguyen to tang dan: ";
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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}
void SapTang(int a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(a[i]) && ktNguyenTo(a[n - 1]))
		{
			if (a[i] > a[n - 1])
				swap(a[i], a[n - 1]);
		}
	}
	SapTang(a, n - 1);
}