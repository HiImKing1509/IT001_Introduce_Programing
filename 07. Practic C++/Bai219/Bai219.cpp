#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKeChan(int[][100], int, int, int);
int TongChanDong(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong d: ";
	cin >> g;

	if (g < 0 || g >= k)
		cout << "\nDong khong hop le";
	else
	{
		cout << "\nCac gia tri chan tren dong " << g << " trong ma tran: ";
		LietKeChan(b, k, l, g);
		cout << "\nTong gia tri chan tren dong " << g << " trong ma tran: " << TongChanDong(b, k, l, g);
	}
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
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
			a[i][j] = rand() % (200 + 1) - 100;
		}
	}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}
void LietKeChan(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKeChan(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		cout << setw(5) << a[d][n - 1];
}
int TongChanDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongChanDong(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		s = s + a[d][n - 1];
	return s;
}

