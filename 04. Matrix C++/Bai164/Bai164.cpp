#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void Xoay90(float[][100], int&, int&);
void Xoay270(float[][100], int&, int&);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	Xoay270(b, k, l);
	cout << "\nMa tran xoay 270 do: " << endl;
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
void Xoay90(float a[][100], int& m, int& n)
{
	float b[100][100];
	int k, l;
	k = n;
	l = m;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];
	}

	m = k;
	n = l;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
	}
}
void Xoay270(float a[][100], int& m, int& n)
{
	Xoay90(a, m, n);
	Xoay90(a, m, n);
	Xoay90(a, m, n);
}