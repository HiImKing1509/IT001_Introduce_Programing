#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktDongGiam(float[][100], int, int, int);
int ktCotGiam(float[][100], int, int, int);
int ktGiam(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	if (ktGiam(b, k, l) == 1)
		cout << "Cac gia tri giam dan theo hang va cot";
	else
		cout << "Cac gia tri khong giam dan theo hang va cot";
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
	int flag = 1;
	for (int i = 0; i < m - 1; i++)
	{
		for (int k = i + 1; k < m; k++)
		{
			if (a[i][c] < a[k][c])
				flag = 0;
		}
	}
	return flag;
}
int ktDongGiam(float a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (a[d][j] < a[d][k])
				flag = 0;
		}
	}
	return flag;
}
int ktGiam(float a[][100], int m, int n)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktDongGiam(a, m, n, i) == 0 || ktCotGiam(a, m, n, j) == 0)
				flag = 0;
		}
	}
	return flag;
}