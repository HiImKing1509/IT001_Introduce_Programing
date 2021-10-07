#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k;
	int h;
	Nhap(b, k, h);
	Xuat(b, k, h);
	int x;
	cout << "Nhap dong can kiem tra: ";
	cin >> x;
	cout << endl;
	cout << "Cac gia tri dang 5^m tren cot "<<x<<" la: ";
	LietKe(b, k, h, x);
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
int KtDang5m(int n)
{
	if (n <= 0)
		return 0;
	int t = n;
	while (t != 1)
	{
		if (t % 5 != 0)
			return 0;
		t = t / 5;
	}
	return 1;
}
void LietKe(int a[][100], int m, int n, int x)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, x);
	if (KtDang5m(a[m - 1][x])==1)
		cout << setw(4) << a[m - 1][x];
}