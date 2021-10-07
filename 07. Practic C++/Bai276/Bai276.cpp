#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void SapDongTang(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong d: ";
	cin >> g;

	if (g < 0 || g >= k)
		cout << "Dong khong hop le";
	else
	{
		cout << "Ma tran co dong " << g << " tang dan" << endl;
		SapDongTang(b, k, l, g);
		Xuat(b, k, l);
	}
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
void SapDongTang(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	for (int j = 0; j < n - 1; j++)
	{
		if (a[d][j] > a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	}
	SapDongTang(a, m, n - 1, d);
}


