#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktCot(int[][100], int, int);
void XoaCot(int[][100], int, int&);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nMa tran sau khi xoa cot: " << endl;
	XoaCot(b, k, l);
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
bool ktCot(int a[][100], int m, int c)
{
	bool flag1 = false;
	bool flag2 = false;
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > 0)
			flag1 = true;
		else if (a[i][c] < 0)
			flag2 = true;
	}
	if (flag1 == true && flag2 == true)
		return true;
	return false; 
}
void XoaCot(int a[][100], int m, int& n)
{
	for (int vtc = 0; vtc < n; vtc++)
	{
		if (ktCot(a, m, vtc))
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = vtc; j < n; j++)
					a[i][j] = a[i][j + 1];
			}
			n = n - 1;
			vtc = vtc - 1;
		}
	}

	if (ktCot(a, m, n - 1))
		n = n - 1;
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
	}
}