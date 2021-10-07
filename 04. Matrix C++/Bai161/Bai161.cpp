#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichTrai(float[], int);
void DichTraiBien(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	DichTraiBien(b, k, l);
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
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i < n - 1; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}
void DichTraiBien(float a[][100], int m, int n)
{
	float b[100];
	int k;
	int i, j;
	k = 0;

	for (j = 0; j < n - 1; j++)
		b[k++] = a[0][j];

	for (i = 0; i < m - 1; i++)
		b[k++] = a[i][n - 1];

	for (j = n - 1; j > 0; j--)
		b[k++] = a[m - 1][j];

	for (i = m - 1; i > 0; i--)
		b[k++] = a[i][0];

	DichTrai(b, k);

	k = 0;

	for (j = 0; j < n - 1; j++)
		a[0][j] = b[k++];

	for (i = 0; i < m - 1; i++)
		a[i][n - 1] = b[k++];

	for (j = n - 1; j > 0; j--)
		a[m - 1][j] = b[k++];

	for (i = m - 1; i > 0; i--)
		a[i][0] = b[k++];
}