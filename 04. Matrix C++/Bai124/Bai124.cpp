#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapDongGiam(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong sap xep: ";
	cin >> g;

	SapDongGiam(b, k, l, g);
	cout << "\nMa tran xay dung: " << endl;
	if (0 <= g && g < k)
		Xuat(b, k, l);
	else
		cout << "Dong khong hop le";
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
void SapDongGiam(float a[][100], int m, int n, int d)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (a[d][j] < a[d][k])
				HoanVi(a[d][j], a[d][k]);
		}
	}
}