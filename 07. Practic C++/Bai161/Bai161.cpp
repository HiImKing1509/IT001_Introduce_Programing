#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void ViTriLeTang(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDay sau khi sap xep la: ";
	ViTriLeTang(b, k);
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
		a[i] = rand() % (200 + 1)-100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
void ViTriLeTang(int a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n - 1; i++)
		if (a[n - 1] % 2 != 0 && a[i] % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	ViTriLeTang(a, n - 1);
}