#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);
int KThoanthien(int);
int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "Nhap dong can kiem tra: ";
	cin >> x;
	cout << endl;
	cout << "Cac gia tri hoan thien tren dong "<<x<<" la: ";
	LietKe(b, k, h, x);
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
int KThoanthien(int n)
{
	int s = 0;
	if (n <= 1)
		return 0;
	for (int i = 1;i < n;i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return 1;
	return 0;
}
void LietKe(int a[][100], int m, int n, int x)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, x);
	if (KThoanthien(a[x][n - 1])==1)
		cout << setw(4) << a[x][n - 1];
}