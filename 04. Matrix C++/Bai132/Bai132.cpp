#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void HoanVi(int&, int&);
void ChanGiamDungMangPhu(int[][100], int, int);
void ChanGiamKhongDungMangPhu(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	ChanGiamDungMangPhu(b, k, l);
	cout << "\nMa tran xay dung su dung mang phu: " << endl;
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
void ChanGiamDungMangPhu(int a[][100], int m, int n)
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
void ChanGiamKhongDungMangPhu(int a[][100], int m, int n)
{
	int index = m * n;
	for (int i = 0; i < index - 1; i++)
	{
		for (int j = i + 1; j < index; j++)
		{
			if (a[i / n][i % n] % 2 == 0 && a[j / n][j % n] % 2 == 0)
			{
				if (a[i / n][i % n] < a[j / n][j % n])
					HoanVi(a[i / n][i % n], a[j / n][j % n]);
			}
		}
	}
}