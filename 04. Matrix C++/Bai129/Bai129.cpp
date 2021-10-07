#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void HoanViDong(float[][100], int, int, int, int);
float TongDong(float[][100], int, int, int);
void SapTang(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	SapTang(b, k, l);
	cout << "\nMa tran xay dung: " << endl;
	Xuat(b, k, l);
	return 1;
}
void Nhap(float a[][100], int& m, int& n)
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
			a[i][j] = -100 + rand() / (RAND_MAX / 200.0);
		}
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << fixed << setprecision(2) << setw(10) << a[i][j];
		}
		cout << endl;
	}
}
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
}
float TongDong(float a[][100], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}
void SapTang(float a[][100], int m, int n)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int k = i + 1; k < m; k++)
		{
			if (TongDong(a, m, n, i) > TongDong(a, m, n, k))
				HoanViDong(a, m, n, i, k);
		}
	}
}