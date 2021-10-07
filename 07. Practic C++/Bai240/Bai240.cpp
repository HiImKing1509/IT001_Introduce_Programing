#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktToanLe(int);
int DemToanLe(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong d: ";
	cin >> g;
	cout << "So luong gia tri toan le tren dong " << g << " trong ma tran: " << DemToanLe(b, k, l, g);
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
bool ktToanLe(int n)
{
	for (int t = abs(n); t > 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
	}
	return true;
}
int DemToanLe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemToanLe(a, m, n - 1, d);
	if (ktToanLe(a[d][n - 1]))
		dem++;
	return dem;
}


