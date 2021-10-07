#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KtThuoc(int[], int, int[], int);
bool TanSuat(int[], int, int);

int main()
{
	int a[100];
	int b[100];
	int k,h;
	Nhap(a, k);
	Xuat(a, k);
	cout << "\nMang A: ";
	Nhap(b, h);
	cout << "\nMang B: ";
	Xuat(b, h);
	cout << endl;
	if (KtThuoc(a, k, b, h))
		cout << "Mang A thuoc B";
	else 
	    cout << "mang A khong thuoc B";
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
bool TanSuat(int d[], int k, int x)
{
	for (int i = 0; i < k; i++)
		if (x == d[i])
			return true;
	return false;
}
bool KtThuoc(int c[], int n, int d[], int k)
{
	if (n == 1)
	{
		if (TanSuat(d, k, c[0]))
			return true;
		return false;
	}
	if (TanSuat(d, k, c[n - 1]) && KtThuoc(c, n - 1, d, k))
		return true;
	return false;

}