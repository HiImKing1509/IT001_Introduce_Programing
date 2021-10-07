#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool KtDongTang(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	if (KtDongTang(b, k, h, x))
		cout << "la dong tang ";
	else
		cout << "khong la dong tang ";
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
bool KtDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 1] > a[d][n - 2] && KtDongTang(a, m, n - 1, d))
		return true;
	return false;
}