#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktCot(int[][100], int, int, int);
void XoaCotDk(int[][100], int, int&, int);
void XoaCot(int[][100], int, int&);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	XoaCot(b, k, l);
	cout << "\nMa tran xay dung: " << endl;
	Xuat(b, k, l);
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}
int ktCot(int a[][100], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] >= 0)
			flag = 0;
	}
	return flag;
}
void XoaCotDk(int a[][100], int m, int& n, int vt)
{
	for (int j = vt; j < n - 1; j++)
	{
		for (int i = 0; i < m; i++)
			a[i][j] = a[i][j + 1];
	}
	n--;
}
void XoaCot(int a[][100], int m, int& n)
{
	for (int j = 0; j < n; j++)
	{
		if (ktCot(a, m, n, j) == 1)
			XoaCotDk(a, m, n, j);
	}
}