#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int KtDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);

	cout << endl;
	cout << "Cac dong toan am la: ";
	LietKe(b, k, h);
	return 1;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
int KtDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		 if (a[d][0] < 0)
			 return 1;
		 else
			 return 0;
	}
	if (a[d][n - 1] < 0 && KtDong(a, m, n - 1, d))
		return 1;
	return 0;
}
void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (KtDong(a, m, n, m - 1) == 1)
		cout << setw(9) << m - 1;
}