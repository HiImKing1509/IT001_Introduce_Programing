#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int kq = TimGiaTri(b, k);
	cout << "\nSo nguyen thoa man la: " << kq;
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
bool ChuSoDau(int k)
{
	int tg = k;
	while (tg >= 9)
		tg = tg / 10;
	if (tg % 2 == 0)
		return false;
	return true;
}
int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) == false)
		return lc;
	if (lc == -1)
		return a[n - 1];
	if (lc != -1)
		return lc;
	if (ChuSoDau(a[n-1]))
	    lc=a[n-1];
	return lc;
}