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
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	cout << "Cac gia tri dang 3m tren dong la: ";
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
			cout << setw(12) << fixed << setprecision(3) << a[i][j];
		cout << endl;
	}
}
bool ktDang3m(int x)
{
	int tg = x;
	while (tg != 1)
	{
		if (tg % 3 != 0)
			return false;
		tg = tg / 3;
	}
	return true;
}
void LietKe(int a[][100], int m, int n, int x)
{
	if (n == 0)
		return;
	LietKe(a, m, n-1, x);
	if (ktDang3m(a[x][n-1]))
		cout << setw(4) << a[x][n-1];
}