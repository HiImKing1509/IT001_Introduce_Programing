#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichTrai(float[][100], int, int);


int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	DichTrai(b, k, h);
	cout << endl;
	cout << "Mang sau khi dich trai la: \n";
	Xuat(b, k, h);
	return 1;
}
void Nhap(float a[][100], int& n, int& m)
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
void Xuat(float a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(9) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
void DichTraiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <= n - 2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}
void DichTrai(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	DichTrai(a, m - 1, n);
	DichTraiDong(a, m, n, m - 1);
}