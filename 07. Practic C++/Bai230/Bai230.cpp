#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float Tich(float[][100], int, int, int);
int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << "\n";
	Xuat(b, k, l);
	int c;
	cout << "\nNhap cot can tinh: ";
	cin >> c;
	float kq = Tich(b, k, l,c);
	cout << "\nTich can tinh tren cot "<<c<<" la: " << kq;
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
float Tich(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float s = Tich(a, m - 1, n, c);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] >= -1 && a[m - 1][j] <= 0)
			s = s * a[m - 1][j];
	return s;
}