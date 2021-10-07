#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	cout << "Cac gia tri toan chan  la: ";
	LietKe(b, k, h);
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
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void LietKe(int a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a[i][n - 1]))
			cout << setw(4) << a[i][n - 1];
}