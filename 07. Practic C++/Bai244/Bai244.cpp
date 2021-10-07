#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChuSo(int[][100], int, int);
int DemChuSo(int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int kq = DemChuSo(b, k, h);
	cout << "gia tri thoa man la: " << kq;
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
int DemChuSo(int k)
{
	if (k < 10)
		return 1;
	return DemChuSo(k / 10) + 1;
}
int DemChuSo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChuSo(a, m - 1, n);
	for (int i = 0; i < n; i++)
			dem=dem + DemChuSo(abs(a[m - 1][i]));
	return dem;
}