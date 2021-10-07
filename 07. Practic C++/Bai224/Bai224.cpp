#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong5m(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	int x;
	cout << "\nNhap dong can tinh: ";
	cin >> x;
	int kq = Tong5m(b, k, h, x);
	cout << "\nTong cac so doi xung tren dong " << x << " la: " << kq;
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
int Ktdang5m(int n)
{
	if (n < 1)
		return 0;
	int t = n;
	while (t != 1)
	{
		if (t % 5 != 0)
			return 0;
		t = t / 5;
	}
	return 1;
}
int Tong5m(int a[][100], int m, int n, int x)
{
	if (n == 0)
		return 0;
	int s = Tong5m(a, m, n - 1, x);
	if (Ktdang5m(a[x][n - 1]) == 1)
		s = s + a[x][n - 1];
	return s;
}