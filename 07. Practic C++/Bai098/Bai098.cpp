#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TongGiaTri(int[], int);
bool ChuSoDau(int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong cac gia tri thoa man: ";
	int kq=TongGiaTri(b, k);
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
		cout << setw(6) << a[i];
	}
}
bool ChuSoDau(int k)
{
	int tg = abs(k);
	while (tg >= 10)
		tg = tg / 10;
	if (tg % 2 == 0)
		return true;
	else
		return false;
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s=TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]))
		s = s + a[n - 1];
	return s;
}
