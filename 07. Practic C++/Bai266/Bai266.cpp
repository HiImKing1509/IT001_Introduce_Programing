#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nCac dong chua so nguyen to: ";
	LietKe(b, k, l);
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
bool ktNguyenTo(int t)
{
	if (t <= 1)
		return false;
	int dem = 0;
	for (int i = 1; i <= t; i++)
	{
		if (t % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}
int ktDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[d][n - 1]))
		return 1;
	ktDong(a, m, n - 1, d);
}
void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << m - 1 << setw(4);
}

