#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int TongBien(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Tong cac gia tri chinh phuong nam tren bien ma tran: " << TongBien(b, k, l);
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
bool ktChinhPhuong(int k)
{
	for (int i = 1; i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}
int TongBien(int a[][100], int m, int n)
{
	int s = 0;
	for (int j = 0; j < n - 1; j++)
		if (ktChinhPhuong(a[0][j]))
			s = s + a[0][j];

	for (int i = 0; i < m - 1; i++)
		if (ktChinhPhuong(a[i][n - 1]))
			s = s + a[i][n - 1];

	for (int j = n - 1; j > 0; j--)
		if (ktChinhPhuong(a[m - 1][j]))
			s = s + a[m - 1][j];

	for (int i = m - 1; i > 0; i--)
		if (ktChinhPhuong(a[i][0]))
			s = s + a[i][0];
	return s;
}