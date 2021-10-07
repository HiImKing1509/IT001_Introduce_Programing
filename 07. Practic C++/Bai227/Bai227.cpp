#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongChPhuong(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	int x;
	cout << "\nNhap cot can tinh: ";
	cin >> x;
	int kq = TongChPhuong(b, k, h, x);
	cout << "\nTong cac so doi xung tren cot " << x << " la: " << kq;
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
int KtChPhuong(int n)
{
	if (n < 1)
		return 0;
	for (int i = 1;i < n;i++)
		if (i * i == n)
			return 1;
	return 0;
}
int TongChPhuong(int a[][100], int m, int n, int x)
{
	if (m == 0)
		return 0;
	int s = TongChPhuong(a, m-1, n , x);
	if (KtChPhuong(a[m-1][x]) == 1)
		s = s + a[m - 1][x];
	return s;
}