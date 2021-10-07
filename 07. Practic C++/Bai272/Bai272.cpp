#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCotGiam(float[][100], int, int, int);
void LietKeCotGiam(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nCac cot giam dan trong ma tran: ";
	LietKeCotGiam(b, k, l);
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
int ktCotGiam(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return 1;
	if (a[m - 2][c] > a[m - 1][c] && ktCotGiam(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}
void LietKeCotGiam(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKeCotGiam(a, m, n - 1);
	if (ktCotGiam(a, m, n, n - 1) == 1)
		cout << n - 1 << setw(4);
}





