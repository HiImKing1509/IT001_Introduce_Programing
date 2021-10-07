#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongCot(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	int kq = TongCot(b, k, h, x);
	cout << "Tong gia tri duong tren cot la: " << kq;
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
bool KtNguyenTo(int x,int k)
{
	if (x == 2 && k % 2 != 0)
		return true;
	else
		if (x==2 && k%2 == 0)
		return false;
	if (k < 0)
		return false;
	if (KtNguyenTo(x - 1,k)==false)
		return false;
	if (k % x == 0)
		return false;
	else
		return true;
	return KtNguyenTo(x - 1, k);
}
int TongCot(int a[][100], int m, int n, int x)
{
	if (n == 0)
		return 0;
	int S = TongCot(a, m , n-1, x);
	if (KtNguyenTo(a[x][n-1]-1,a[x][n-1]))
		S = S + a[x][n-1];
	return S;
}