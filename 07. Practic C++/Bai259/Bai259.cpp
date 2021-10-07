#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool KtDong(float[][100], int, int, int);

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
	if (KtDong(b, k, h, x))
		cout << "dong co gia tri am ";
	else
		cout << "dong khong co gia tri am ";
	
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
bool KtDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return true;
	return KtDong(a, m, n - 1, d);
}