#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void HoanViDong(float[][100], int, int, int, int);

int main()
{
	float b[100][100];
	int k, l, g1, g2;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong hoan vi 1: ";
	cin >> g1;
	cout << "Nhap dong hoan vi 2: ";
	cin >> g2;

	HoanViDong(b, k, l, g1, g2);
	cout << "\nMa tran xay dung: " << endl;
	if (0 <= g1 && g1 < k && 0 <= g2 && g2 < k)
		Xuat(b, k, l);
	else
		cout << "Dong hoan vi khong hop le";
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
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
	{
		HoanVi(a[d1][j], a[d2][j]);
	}
}