#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XoaCot(float[][100], int, int&, int);
int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "\nNhap x: ";
	cin >> x;
	XoaCot(b, k, h, x);
	cout << endl;
	cout << "Mang sau khi them la: \n";
	Xuat(b, k, h);
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
void XoaCot(float a[][100], int m, int& n, int x)
{
	if (m == 0)
	{
		n--;
		return;
	}
	XoaCot(a, m - 1, n, x);
	for (int i = x; i < n; i++)
		a[m - 1][i] = a[m - 1][i + 1];
}