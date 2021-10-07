#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool NhoNhatDong(float[][100], int, int, int, int);
bool NhoNhatCot(float[][100], int, int, int, int);
int DemYenNgua(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nSo luong Yen Ngua tren ma tran: " << DemYenNgua(b, k, l);
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
bool NhoNhatDong(float a[][100], int m, int n, int vtd, int vtc)
{
	float x = a[vtd][vtc];
	for (int j = 0; j < n; j++)
	{
		if (a[vtd][j] > x)
			return false;
	}
	return true;
}
bool NhoNhatCot(float a[][100], int m, int n, int vtd, int vtc)
{
	float x = a[vtd][vtc];
	for (int i = 0; i < m; i++)
	{
		if (a[i][vtc] > x)
			return false;
	}
	return true;
}
int DemYenNgua(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (NhoNhatDong(a, m, n, i, j) && NhoNhatCot(a, m, n, i, j))
				dem++;
		}
	}
	return dem;
}