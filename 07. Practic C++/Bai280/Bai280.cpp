#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapXep(float[][100], int, int);
void SapDongTang(float[][100], int, int, int);
void SapDongGiam(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	SapXep(b, k, h);
	cout << endl;
	cout << "Mang sau khi sap xep la: \n";
	Xuat(b, k, h);
	return 1;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
void SapDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
	   return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] > a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
    SapDongTang(a, m, n - 1, d);
}
void SapDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
}
void SapXep(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	SapXep(a, m - 1, n);
	if ((m - 1) % 2 == 0)
		SapDongTang(a, m, n, m - 1);
	else
		SapDongGiam(a, m, n, m - 1);
}