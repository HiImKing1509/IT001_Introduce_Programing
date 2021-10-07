#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float KtDong(float[][100], int, int, int);
float DuongNhoNhat(float[][100], int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	float kq = DuongNhoNhat(b, k, h);
	cout << "gia tri thoa man la: " << kq;
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
float DuongNhoNhat(float a[][100], int m, int n)
{
	if (n == 0)
		return 0;
	float lc = DuongNhoNhat(a, m, n - 1);
	for (int i=0;i<m;i++)
		if (a[i][n - 1] > 0)
		{
			if (lc == 0 || a[i][n - 1] < lc)
				lc = a[i][n - 1];
		}
	return lc;
}