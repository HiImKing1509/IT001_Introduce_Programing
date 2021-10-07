#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
bool SoDauChan(int);
int DemNguyenTo(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);


	cout << "Nhap cot c: ";
	cin >> h;

	cout << "So luong gia tri nguyen to co chu so dau chan tren cot " << h << " trong ma tran: " << DemNguyenTo(b, k, l, h);
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
bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
bool SoDauChan(int k)
{
	int dv;
	for (int t = abs(k); t != 0; t = t / 10)
		dv = t % 10;
	if (dv % 2 == 0)
		return true;
	return false;
}
int DemNguyenTo(int a[][100], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktNguyenTo(a[i][c]) && SoDauChan(a[i][c]))
			dem++;
	return dem;
}
