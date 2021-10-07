#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
int DemDong(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cac dong co nhieu so nguyen to nhat trong ma tran: ";
	if (DemLonNhat(b, k, l) == 0)
		cout << "Ma tran khong ton tai gia tri nguyen to";
	else
		LietKe(b, k, l);

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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}
int DemDong(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktNguyenTo(a[d][j]))
			dem++;
	}
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	float lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	}
	return lc;
}
void LietKe(int a[][100], int m, int n)
{
	float lc = DemLonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == lc)
			cout << i << setw(5);
}