#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void ThemDong(float[][100], int&, int);
float TongCot(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	ThemDong(b, k, h);
	cout << endl;
	cout << "Mang sau khi them la: \n";
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
float TongCot(float a[][100], int m, int n, int d)
{
	if (m == 0)
		return 0;
	float S = TongCot(a, m - 1, n, d);
	return S + a[m - 1][d];
}
void ThemDong(float a[][100], int& m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[n - 1][m-1] = TongCot(a, m-1, n, n - 1);
}