#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChuSo(int);
int DemCot(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cac cot co so chu so nhieu nhat trong ma tran: ";
		LietKe(b, k, l);

	return 1;
}
void Nhap(int a[][100], int& m, int& n)
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
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}
int DemChuSo(int k)
{
	int dem = 0;
	for (int t = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		dem++;
	}
	return dem;
}
int DemCot(int a[][100], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		int scs = DemChuSo(a[i][c]);
		dem = dem + scs;
	}
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	float lc = DemCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
	{
		if (DemCot(a, m, n, j) > lc)
			lc = DemCot(a, m, n, j);
	}
	return lc;
}
void LietKe(int a[][100], int m, int n)
{
	float lc = DemLonNhat(a, m, n);
	for (int j = 0; j < n; j++)
		if (DemCot(a, m, n, j) == lc)
			cout << j << setw(5);
}