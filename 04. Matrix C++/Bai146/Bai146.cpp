#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDong(int[][100], int, int);
void XoaDong(int[][100], int&, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nMa tran sau khi xoa dong: " << endl;
	XoaDong(b, k, l);
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
bool ktDong(int a[][100], int n, int d)
{
	bool flag = true;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] % 2 != 0)
			return false;
	}
	if (flag == true)
		return true;
	return false;
}
void XoaDong(int a[][100], int& m, int n)
{
	for (int vtd = 0; vtd < m; vtd++)
	{
		if (ktDong(a, n, vtd))
		{
			for (int j = 0; j < n; j++)
			{
				for (int i = vtd; i < m; i++)
					a[i][j] = a[i + 1][j];
			}
			m--;
			vtd--;
		}
	}

	if (ktDong(a, n, m - 1))
		m--;;
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
	}
}