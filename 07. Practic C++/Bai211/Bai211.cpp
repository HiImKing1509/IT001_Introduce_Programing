#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TichLe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	int kq = TichLe(b, k, h);
	cout << "Tich gia tri thoa man la: " << kq;
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
int ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	if (ktToanChan(n / 10) == 1)
		return 1;
	int dv = n % 10;
	if (dv % 2 == 0)
		return 0;
	else
		return 1;
	return ktToanChan(n / 10);
}
int TichLe(int a[][100], int m, int n)
{
	if (m == 0)
		return 1;
	int T = TichLe(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] % 2 != 0 && (m-1)%2==0)
			T = T * a[m - 1][i];
	return T;
}