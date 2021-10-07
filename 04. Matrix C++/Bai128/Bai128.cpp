#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapCotGiam(float[][100], int, int, int);
void SapCotTang(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	SapXep(b, k, l);
	cout << "\nMa tran xay dung: " << endl;
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapCotTang(float a[][100], int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int k = i + 1; k < m; k++)
		{
			if (a[i][c] > a[k][c])
				HoanVi(a[i][c], a[k][c]);
		}
	}
}
void SapCotGiam(float a[][100], int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int k = i + 1; k < m; k++)
		{
			if (a[i][c] < a[k][c])
				HoanVi(a[i][c], a[k][c]);
		}
	}
}
void SapXep(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
	}
}