#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);

int main()
{
	int b[100];
	int k, c, h;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int m;
	cout << "\nNhap so nguyen m: ";
	cin >> m;

	cout << "\nMang co tong cac phan tu bang " << m << " la: ";
	TimCon(b, k, m, c, h);
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
int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt < n; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
			}
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << setw(6);
}
