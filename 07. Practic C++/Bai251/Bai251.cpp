#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float AmLonNhat(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nSo am lon nhat trong ma tran: " << AmLonNhat(b, k, l);
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
float AmLonNhat(float a[][100], int m, int n)
{
	if (n == 0)
		return 0;
	float lc = AmLonNhat(a, m, n - 1);
	for (int i = 0; i < m; i++)
	{
		if (a[i][n - 1] < 0)
			if (lc == 0 || lc < a[i][n - 1])
				lc = a[i][n - 1];
	}
	return lc;
}


