#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
void XuatDoiXung(int[], int);
int TongDoiXung(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nCac gia tri doi xung trong mang: ";
	XuatDoiXung(b, k);

	cout << "\nTong cac gia tri doi xung trong mang: " << TongDoiXung(b, k);
	
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
bool ktDoiXung(int n)
{
	int t = abs(n);
	int s = 0;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * 10 + dv;
		t = t / 10;
	}
	if (s == n)
		return true;
	return false;
}
void XuatDoiXung(int a[], int n)
{
	if (n == 0)
		return;
	XuatDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		cout << a[n - 1] << setw(5);
}
int TongDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		s = s + a[n - 1];
	return s;
}


