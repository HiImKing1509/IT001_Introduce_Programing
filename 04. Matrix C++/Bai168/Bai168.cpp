#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCon(float[][100], int, int, int, int);
void ConCuoi(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nMa tran con 3x3 toan am cuoi cung: ";
	ConCuoi(b, k, l);
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
int ktCon(float a[][100], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[vtd + i][vtc + j] >= 0)
				flag = 0;
		}
	}
	return flag;
}
void ConCuoi(float a[][100], int m, int n)
{
	int vtd, vtc;
	for (int vtd = m - 3; vtd >= 0; vtd--)
	{
		for (int vtc = n - 3; vtc >= 0; vtc--)
		{
			if (ktCon(a, m, n, vtd, vtc) == 1)
			{
				for (int i = 0; i < 3; i++)
				{
					cout << endl;
					for (int j = 0; j < 3; j++)
						cout << fixed << setprecision(2) << setw(10) << a[vtd + i][vtc + j];
				}
				return;
			}
		}
	}
	vtd = vtc = -1;
}