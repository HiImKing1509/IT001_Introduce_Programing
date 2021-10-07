#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCon(float[][100], int, int, int, int, int, int);
float TongLonNhat(float[][100], int, int, int, int, int, int);
void XuatCon(float[][100], int, int, int, int, int, int);
void XuatTongConLonNhat(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "\nMa tran con co tong lon nhat: " << endl;
	XuatTongConLonNhat(b, k, l);

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
float TongCon(float a[][100], int m, int n, int vtd, int vtc, int k, int l)
{
	float t = 0;
	for (int i = vtd; i < k; i++)
	{
		for (int j = vtc; j < l; j++)
			t = t + a[i][j];
	}
	return t;
}
float TongLonNhat(float a[][100], int m, int n, int vtd, int vtc, int k, int l)
{
	int t1 = TongCon(a, m, n, 0, 0, 1, 1);
	int td = 0;
	int tc = 0;
	int dd = 1;
	int dc = 1;

	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (k = i + 1; k < m; k++)
			{
				for (l = j + 1; j < l; j++)
				{
					if (TongCon(a, m, n, i, j, k, l) > t1)
						t1 = TongCon(a, m, n, i, j, k, l);
					int td = i;
					int tc = j;
					int dd = k;
					int dc = l;
				}
			}
		}
	}
	return t1;
}
void XuatCon(float a[][100], int m, int n, int vtd, int vtc, int k, int l)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << fixed << setprecision(2) << setw(10) << a[vtd + i][vtc + j];
		}
		cout << endl;
	}
}
void XuatTongConLonNhat(float a[][100], int  m, int n)
{
	float b[] = { 1,2,3,4 };
	float lc = TongCon(a, m, n, 0, 0, 1, 1);
	for (int k = 1; k <= m; k++)
	{
		for (int l = 1; l <= n; l++)
		{
			for (int i = 0; i <= m - k; i++)
			{
				for (int j = 0; j <= n - l; j++)
				{
					if (TongCon(a, m, n, i, j, k, l) > lc)
					{
						lc = TongCon(a, m, n, i, j, k, l);
						b[0] = i;
						b[1] = j;
						b[2] = k;
						b[3] = l;
					}
				}
			}
		}
	}
	XuatCon(a, m, n, b[0], b[1], b[2], b[3]);
}