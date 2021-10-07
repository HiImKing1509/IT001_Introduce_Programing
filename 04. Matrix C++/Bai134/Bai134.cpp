#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void HoanVi(int&, int&);
void LeGiam(int[][100], int, int);
void ChanTang(int[][100], int, int);
void ChanTangLeGiam(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	ChanTangLeGiam(b, k, l);
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
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void LeGiam(int a[][100], int m, int n)
{
	int a1[100];
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a1[x++] = a[i][j];
	}
	for (int i = 0; i < x - 1; i++)
	{
		for (int k = i + 1; k < x; k++)
		{
			if (a1[i] % 2 != 0 && a1[k] % 2 != 0)
			{
				if (a1[i] < a1[k])
					HoanVi(a1[i], a1[k]);
			}
		}
	}
	x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = a1[x++];
	}
}
void ChanTang(int a[][100], int m, int n)
{
	int a1[100];
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a1[x++] = a[i][j];
	}
	for (int i = 0; i < x - 1; i++)
	{
		for (int k = i + 1; k < x; k++)
		{
			if (a1[i] % 2 == 0 && a1[k] % 2 == 0)
			{
				if (a1[i] > a1[k])
					HoanVi(a1[i], a1[k]);
			}
		}
	}
	x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = a1[x++];
	}
}
void ChanTangLeGiam(int a[][100], int m, int n)
{
	ChanTang(a, m, n);
	LeGiam(a, m, n);
}