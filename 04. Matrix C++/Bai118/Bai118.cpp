#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100]);

int main()
{
	float b[100][100];
	float b1[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Ma tran xay dung: " << endl;
	XayDung(b, k, l, b1);
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
void XayDung(float a[][100], int m, int n, float a1[][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = abs(a[i][j]);
			cout << fixed << setprecision(2) << setw(10) << a1[i][j];
		}
		cout << endl;
	}
}