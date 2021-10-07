#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "gia tri duong dau thoa man: ";
	int kq = ChanDau(b, k);
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
		a[i] = rand() % (200+1)-100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
int ChanDau(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = ChanDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return 0;
}
