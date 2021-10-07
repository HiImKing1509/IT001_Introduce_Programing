#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int TanSuat(float[][100], int, int, float);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	float z;
	cout << "Nhap x: ";
	cin >> z;
	cout << "Tan suat xuat hien cua " << z << " trong ma tran: " << TanSuat(b, k, l, z);
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
int TanSuat(float a[][100], int m, int n, float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, m, n - 1, x);
	for (int i = 0; i < m; i++)
		if (a[i][n - 1] == x)
			dem++;
	return dem;
}

