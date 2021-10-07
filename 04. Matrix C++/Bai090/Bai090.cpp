#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDong(float[][100], int, int, int);
float TongLonNhat(float[][100], int, int);
void LietKe(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Dong co tong lon nhat trong ma tran la: ";
	LietKe(b, k, l);
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
float TongDong(float a[][100], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}
float TongLonNhat(float a[][100], int m, int n)
{
	float lc = TongDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (TongDong(a, m, n, i) > lc)
			lc = TongDong(a, m, n, i);
	}
	return lc;
}
void LietKe(float a[][100], int m, int n)
{
	float lc = TongLonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) == lc)
			cout << i << setw(5);
}