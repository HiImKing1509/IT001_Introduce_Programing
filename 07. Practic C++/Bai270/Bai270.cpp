#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ktCot(int[][100], int, int, int);
void LietKeCot(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cot chua gia tri chinh phuong trong ma tran: ";
	LietKeCot(b, k, l);
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
			a[i][j] = -100 + rand() / (RAND_MAX / 200);
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
bool ktChinhPhuong(int t)
{
	if (t <= 0)
		return false;
	for (int i = 1; i <= t; i++)
	{
		if (i * i == t)
			return true;
	}
	return false;
}
int ktCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	if (ktChinhPhuong(a[m - 1][c]))
		return 1;
	return ktCot(a, m - 1, n, c);
}
void LietKeCot(int a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKeCot(a, m, n - 1);
	if (ktCot(a, m, n, n - 1) == 1)
		cout << n - 1 << setw(5);
}


