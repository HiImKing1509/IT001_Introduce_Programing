#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Lietke(int[], int);
void Xuat(int[], int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	cout << "\nCac so chan co trong mang can tim la: ";
	Lietke(a, n);
	return 1;
}
void Lietke(int a[], int n)
{
	if (n == 0)
		return;
	Lietke(a, n - 1);
	if (a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}
void Nhap(int a[], int n)
{
	
	srand(std::time(nullptr));
	if (n >= 0)
	{
		Nhap(a, n - 1);
		a[n - 1] = rand() % (200 + 1) - 100;
	}
	
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n-1];
}