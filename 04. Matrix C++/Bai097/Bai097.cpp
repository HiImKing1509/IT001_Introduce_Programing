#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktHoangHau(float[][100], int, int, int, int);
int DemHoangHau(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "So luong gia tri Hoang Hau la: " << DemHoangHau(b, k, l);
	return 1;
}
void Nhap(float a[][100], int& n, int& m)
{
	cout << "Nhap so dong: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}
bool ktHoangHau(float a[][100], int n, int m, int vtd , int vtc)
{
	for (int i = 0; i < m; i++)
		if (a[vtd][vtc] < a[i][vtc])
			return false;

	for (int j = 0; j < n; j++)
		if (a[vtd][vtc] < a[vtd][j])
			return false;

	int i = vtd;
	int j = vtc;
	while (i >= 0 && j >= 0)
	{
		if (a[vtd][vtc] < a[i][j])
			return false;
		i--;
		j--;
	}
	int x = vtd;
	int y = vtc;

	while (x < m && y < n)
	{
		if (a[vtd][vtc] < a[x][y])
			return false;
		x++;
		y++;
	}

	int z = vtd;
	int t = vtc;
	while (z < m && t >= 0)
	{
		if (a[vtd][vtc] < a[z][t])
			return false;
		z++;
		t--;
	}

	int g = vtd;
	int h = vtc;
	while (g >= 0 && h < n)
	{
		if (a[vtd][vtc] < a[g][h])
			return false;
		g--;
		h++;
	}
	return true;
}
int DemHoangHau(float a[][100], int n, int m)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktHoangHau(a, n, m, i, j))
				dem++;
		}
	}
	return dem;
}