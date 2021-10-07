#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int DemChinhPhuong(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "So luong gia tri chinh phuong trong ma tran: " << DemChinhPhuong(b, k, l);
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
bool ktChinhPhuong(int t)
{
	if (t <= 0)
		return false;
	for (int i = 1; i <= t; i++)
		if (i * i == t)
			return true;
	return false;
}
int DemChinhPhuong(int a[][100], int m, int n)
{
	if (n == 0)
		return 0;
	int dem = DemChinhPhuong(a, m, n - 1);
	for (int i = 0; i < m; i++)
	{
		if (ktChinhPhuong(a[i][n - 1]))
			dem++;
	}
	return dem;
}


