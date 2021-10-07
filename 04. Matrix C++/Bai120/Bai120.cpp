#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemLanCan(float[][100], int, int, int, int);
void XayDung(float[][100], int, int, int[][100]);

int main()
{
	float b[100][100];
	int b1[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Ma tran xay dung: " << endl;
	XayDung(b, k, l, b1);
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
int DemLanCan(float a[][100], int m, int n, int d, int c)
{
	int dem = 0;
	for (int di = -1; di <= 1; di++)
	{
		for (int dj = -1; dj <= 1; dj++)
		{
			if (d + di >= 0 && d + di < m && c + dj >= 0 && c + dj < n && !(di == 0 && dj == 0) && a[d + di][c + dj]>0)
				dem++;
		}
	}
	return dem;
}
void XayDung(float a[][100], int m, int n, int a1[][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = DemLanCan(a, m, n, i, j);
			cout << fixed << setprecision(2) << setw(5) << a1[i][j];
		}
		cout << endl;
	}
}