#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void DuongTangDungMangPhu(float[][100], int, int);
void DuongTangKhongDungMangPhu(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	DuongTangKhongDungMangPhu(b, k, l);
	cout << "\nMa tran xay dung khong su dung mang phu: " << endl;
	Xuat(b, k, l);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void DuongTangDungMangPhu(float a[][100], int m, int n)
{
	float a1[100];
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a1[x++] = a[i][j];
	}
	for (int i = 0; i < x - 1; i++)
	{
		for (int k = i + 1; k < x; k++)
		{
			if (a1[i] > 0 && a1[k] > 0)
			{
				if (a1[i] > a1[k])
					HoanVi(a1[i], a1[k]);
			}
		}
	}
	x = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = a1[x++];
	}
}
void DuongTangKhongDungMangPhu(float a[][100], int m, int n)
{
	int index = m * n;
	for (int i = 0; i < index - 1; i++)
	{
		for (int j = i + 1; j < index; j++)
		{
			if (a[i / n][i % n] > 0 && a[j / n][j % n] > 0)
			{
				if (a[i / n][i % n] > a[j / n][j % n])
					HoanVi(a[i / n][i % n], a[j / n][j % n]);
			}
		}
	}
}