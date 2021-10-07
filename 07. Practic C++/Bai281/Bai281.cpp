#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapXep(float[][100], int, int);
void SapCotTang(float[][100], int, int, int);
void SapCotGiam(float[][100], int, int, int);

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
void SapCotTang(float a[][100], int m, int n, int d)
{
	if (m == 1)
		return;
	for (int j = 0; j <= m - 2; j++)
		if (a[j][d] > a[m - 1][d])
			swap(a[j][d], a[m - 1][d]);
	SapCotTang(a, m - 1, n, d);
}
void SapCotGiam(float a[][100], int m, int n, int d)
{
	if (m == 1)
		return;
	for (int j = 0; j <= m - 2; j++)
		if (a[j][d] < a[m - 1][d])
			swap(a[j][d], a[m - 1][d]);
	SapCotGiam(a, m - 1, n, d);
}
void SapXep(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	SapXep(a, m, n - 1);
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
}