#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong3m(int[][100], int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	cout << endl;
	int kq = Tong3m(b, k, h);
	cout << "\nTong cac so co dang 3^m tren ma tran la: " << kq;
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
int Ktdang3m(int n)
{
	if (n < 1)
		return 0;
	int t = n;
	while (t != 1)
	{
		if (t % 3 != 0)
			return 0;
		t = t / 3;
	}
	return 1;
}
int Tong3m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 1;j < n;j = j + 2)
		if (Ktdang3m(a[m - 1][j]) == 1)
			s = s + a[m - 1][j];
	return s;

}