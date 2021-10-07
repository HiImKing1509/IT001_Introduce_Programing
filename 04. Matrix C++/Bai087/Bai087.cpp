#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TanSuat(int[][100], int, int, int);
int TimGiaTri(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Gia tri xuat hien nhieu nhat trong ma tran la: " << TimGiaTri(b, k, l);
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
int TanSuat(int a[][100], int m, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
				dem++;
		}
	}
	return dem;
}
int TimGiaTri(int a[][100], int m, int n)
{
	int ts1;
	int ts = TanSuat(a, m, n, a[0][0]);
	int d = 0;
	int c = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ts1 = TanSuat(a, m, n, a[i][j]);
			if (ts < ts1)
			{
				ts = ts1;
				d = i;
				c = j;
			}
		}
	}
	return a[d][c];
}