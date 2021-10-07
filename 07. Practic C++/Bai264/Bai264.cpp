#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void LietKeDong(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Dong chua gia tri chan trong ma tran: ";
	LietKeDong(b, k, l);
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
int ktDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] % 2 == 0)
		return 1;
	return ktDong(a, m, n - 1, d);
}
void LietKeDong(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKeDong(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << m - 1 << setw(5);
}


