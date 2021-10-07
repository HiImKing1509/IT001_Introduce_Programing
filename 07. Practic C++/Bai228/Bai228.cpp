#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
void LietKe2m(int[][100], int, int, int);
int Tong2m(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap cot c: ";
	cin >> h;

	if (h < 0 || h >= l)
		cout << "\nCot khong hop le";
	else
	{
		if (Tong2m(b, k, l, h) == 0)
			cout << "Cot " << h << " khong ton tai gia tri dang 2^m";
		else
		{
			cout << "\nCac gia tri dang 2^m tren cot " << h << " trong ma tran: ";
			LietKe2m(b, k, l, h);
			cout << "\nTong gia tri dang 2^m tren cot " << h << " trong ma tran: " << Tong2m(b, k, l, h);
		}
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
bool ktDang2m(int k)
{
	if (k <= 0)
		return false;
	while (k > 1)
	{
		int dv = k % 2;
		if (dv != 0)
			return false;
		k = k / 2;
	}
	return true;
}
void LietKe2m(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe2m(a, m - 1, n, c);
	if (ktDang2m(a[m - 1][c]))
		cout << setw(5) << a[m - 1][c];
}
int Tong2m(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = Tong2m(a, m - 1, n, c);
	if (ktDang2m(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}

