#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
bool ktChinhPhuong(int);
int ktDong(int[][100], int, int, int);
void XoaDongDk(int[][100], int&, int, int);
void XoaDong(int[][100], int&, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	XoaDong(b, k, l);
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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}
bool ktChinhPhuong(int k)
{
	for (int i = 1; i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}
int ktDong(int a[][100], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktNguyenTo(a[d][j]))
			flag1 = 1;
		if (ktChinhPhuong(a[d][j]))
			flag2 = 1;
	}
	return flag1 * flag2;
}
void XoaDongDk(int a[][100], int& m, int n, int vt)
{
	for (int i = vt; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = a[i + 1][j];
	}
	m--;
}
void XoaDong(int a[][100], int& m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDong(a, m, n, i) == 1)
			XoaDongDk(a, m, n, i);
	}
}