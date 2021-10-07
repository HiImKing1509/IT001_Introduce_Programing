#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float NhoNhatDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

int main()
{
	float b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nMa tran them cot: " << endl;
	ThemCot(b, k, l);
	Xuat(b, k, l);

	return 1;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100 + rand() / (RAND_MAX / 200.0);
		}
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << fixed << setprecision(2) << setw(10) << a[i][j];
		}
		cout << endl;
	}
}
float NhoNhatDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return -1;
	float lc = NhoNhatDong(a, m, n - 1, d);
	{
		if (lc == -1 || a[d][n - 1] < lc)
			lc = a[d][n - 1];
	}
	return lc;
}
void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = NhoNhatDong(a, m, n - 1, m - 1);
}
