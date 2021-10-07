#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);

int main()
{
	int b[100];
	int k, c;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nNhap do dai mang con: ";
	cin >> c;
	cout << "Tat ca mang con co do dai " << c << ": ";
	XuatCon(b, k, c);
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
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(6) << a[vt + i];
}
void XuatCon(int a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		cout << "\nMang thu " << vt + 1 << ": ";
		XuatCon(a, n, vt, l);
	}
}