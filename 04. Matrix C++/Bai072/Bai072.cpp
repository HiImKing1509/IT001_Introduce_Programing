#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemPhanBiet(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "So luong gia tri phan biet trong ma tran: " << DemPhanBiet(b, k, l);
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
int DemPhanBiet(float a[][100], int m, int n)
{
	int c = m * n;
	int dem = 0;
	int flag;
	for (int i = 0; i < c; i++)
	{
		flag = 1;
		for (int j = i + 1; j < c; j++)
		{
			if (a[j / n][j % n] == a[i / n][i % n])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			dem++;
	}
	return dem;
}