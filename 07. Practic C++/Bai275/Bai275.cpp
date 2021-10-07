#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanViCot(float[][100], int, int, int, int);

int main()
{
	float b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	int y;
	cout << "Nhap y: ";
	cin >> y;
	cout << endl;
	HoanViCot(b, k, h, x, y);
	cout << endl;
	cout << "Mang sau khi sap xep la: \n";
	Xuat(b, k, h);
	return 1;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
void HoanViCot(float a[][100], int m, int n, int d1, int d2)
{
	if (m == 0)
		return;
	HoanViCot(a, m - 1, n, d1, d2);
	swap(a[m - 1][d1], a[m - 1][d2]);
}
