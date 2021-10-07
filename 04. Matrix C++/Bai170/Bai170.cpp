#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCon(float[][100], int, int, float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran A: " << endl;
	Xuat(b, k, l);
	cout << endl;

	float b1[100][100];
	int k1, l1;
	Nhap(b1, k1, l1);
	cout << "Ma tran B: " << endl;
	Xuat(b1, k1, l1);
	cout << endl;

	int flag = ktCon(b, k, l, b1, k1, l1);
	if (flag == 0)
		cout << "Ma tran B khong la con cua ma tran A";
	else
		cout << "Ma tran B la con cua ma tran A";

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
int ktCon(float a[][100], int m, int n, float a1[][100], int p, int q)
{
	if (m > p || n > q)
		return 0;

	int flag = 0;
	for (int d = 0; d <= p - m; d++)
	{
		for (int c = 0; c <= q - n; c++)
		{
			int x = 1;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (a[i][j] != a1[d + i][c + j])
						x = 0;
				}
			}
			if (x == 1)
				flag = 1;
		}
	}
	return flag;
}