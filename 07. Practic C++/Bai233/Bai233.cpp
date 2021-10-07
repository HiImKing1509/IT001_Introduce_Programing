#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Demchan(int[][100], int, int);
int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	int kq = Demchan(b, k, h);
	cout << "\nSo luong gia tri chan co trong ma tran la: " << kq;
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
int Demchan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = Demchan(a, m - 1, n);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] % 2 == 0)
			dem++;
	return dem;
}