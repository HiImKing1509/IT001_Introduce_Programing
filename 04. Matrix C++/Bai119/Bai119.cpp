#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);
float LonNhatCot(float[][100], int, int, int);
void XayDung(float[][100], int, int, float[][100]);

int main()
{
	float b[100][100];
	float b1[100][100];
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
float LonNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > lc)
			lc = a[d][j];
	}
	return lc;
}
float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > lc)
			lc = a[i][c];
	}
	return lc;
}
void XayDung(float a[][100], int m, int n, float a1[][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float lnd = LonNhatDong(a, m, n, i);
			float lnc = LonNhatCot(a, m, n, j);
			if (lnd < lnc)
				a1[i][j] = lnc;
			else
				a1[i][j] = lnd;
			cout << fixed << setprecision(2) << setw(10) << a1[i][j];
		}
		cout << endl;
	}
}