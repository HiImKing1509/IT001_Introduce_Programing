#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int NguyenToDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "gia tri nguyen to dau thoa man: ";
	int kq = NguyenToDau(b, k);
	cout << kq;
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
int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = NguyenToDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (KtNguyenTo(a[n - 1]-1,a[n-1]))
		return a[n - 1];
	return 0;
}
