#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float Tong(float[][100], int, int, float, float);
int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << "\n";
	Xuat(b, k, l);
	float x, y;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;
	float kq = Tong(b, k, l, x, y);
	cout << "\ntong can tim la: " << kq;
	return 1;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
		}
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		}
		cout << "\n";
	}
}
float Tong(float a[][100], int m, int n, float x, float y)
{
	if (m == 0)
		return 0;
	float s = Tong(a, m - 1, n, x, y);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] > x && a[m - 1][j] < y)
			s = s + a[m - 1][j];
	return s;
}