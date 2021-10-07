#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cac dong giam dan trong ma tran: ";
	LietKe(b, k, l);
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
int ktDong(float a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (a[d][j] < a[d][k])
				flag = 0;
		}
	}
	return flag;
}
void LietKe(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDong(a, m, n, i) == 1)
			cout << i << setw(5);
	}
}