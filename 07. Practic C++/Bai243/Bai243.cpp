#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChanDau(int);
int DemCot(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap cot c: ";
	cin >> h;
	if (h < 0 || h >= l)
		cout << "Dong khong hop le";
	else
		cout << "So luong gia tri co chu so dau chan tren cot " << h << " trong ma tran: " << DemCot(b, k, l, h);
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
bool ktChanDau(int n)
{
	int t = abs(n);
	int dv;
	while (t > 0)
	{
		dv = t % 10;
		t = t / 10;
	}
	if (dv % 2 == 0)
		return true;
	return false;
}
int DemCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemCot(a, m - 1, n, c);
	if (ktChanDau(a[m-1][c]))
		dem++;
	return dem;
}


