#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanViDong(float[][100], int, int, int,int);

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
	HoanViDong(b, k, h, x,y);
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
void HoanViDong(float a[][100], int m, int n, int d1,int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1,d2);
			swap(a[d1][n-1], a[d2][n - 1]);
}
