#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void Lietke(int[][100], int, int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau la: " << "\n";
	Xuat(a, m, n);
	return 1;
	cout << "\n";
	Lietke(a, m, n);
}
void Nhap(int a[][100], int& n, int& m)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = rand() % (201) - 100;
		}
	}
}
void Xuat(int a[][100], int n, int m)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << "\n";
	}
}
void Lietke(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Lietke(a, m-1, n);
	for (int i = 0;i < n;i++)
		if (a[m-1][i] % 2 != 0)
			cout << setw(4) << a[m-1][i];
}