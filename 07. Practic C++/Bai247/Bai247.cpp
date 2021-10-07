#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float DuongDau(float[][100], int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	float kq = DuongDau(b, k, h);
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
float DuongDau(float a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	float lc = DuongDau(a, m-1, n);
	if (lc != -1)
		return lc;
	for (int i = 0; i < n; i++)
		if (a[m-1][i] > 0)
			return a[m-1][i];
	return -1;
}