#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void TachChuSo(int, int[]);
void ChuSoItNhat(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Chu so xuat hien it nhat trong ma tran: ";
	ChuSoItNhat(b, k, l);
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
void TachChuSo(int n, int b[])
{
	int dv;
	n = abs(n);
	while (n > 0)
	{
		dv = n % 10;
		b[dv]++;
		n = n / 10;
	}
}
void ChuSoItNhat(int a[][100], int m, int n)
{
	int b[10] = { 0 };
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			TachChuSo(a[i][j], b);
	}

	int chuso = 0;
	for (int i = 0; i < 10; i++)
	{
		if (b[chuso] > b[i])
			chuso = i;
	}

	for (int i = 0; i < 10; i++)
	{
		if (b[chuso] == b[i])
			cout << i << setw(4);
	}
}