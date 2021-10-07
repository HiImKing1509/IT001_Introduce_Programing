#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemDuongBien(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "So luong gia tri duong tren bien ma tran la: " << DemDuongBien(b, k, l);
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
int DemDuongBien(float a[][100], int m, int n)
{
	int dem = 0;
	for (int j = 0; j < n - 1; j++)
		if (a[0][j] > 0)
			dem++;

	for (int i = 0; i < m - 1; i++)
		if (a[i][n - 1] > 0)
			dem++;

	for (int j = n - 1; j > 0; j--)
		if (a[m - 1][j] > 0)
			dem++;

	for (int i = m - 1; i > 0; i--)
		if (a[i][0] > 0)
			dem++;
	return dem;
}