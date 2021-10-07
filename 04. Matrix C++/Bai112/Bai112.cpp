#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong1(int[][100], int, int, int);
int ktDong2(int[][100], int, int, int);
int ktDong3(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Cac dong chua gia tri am, duong va gia tri 0: ";
	LietKe(b, k, l);
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
int ktDong1(int a[][100], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] < 0)
			flag = 1;
	}
	return flag;
}
int ktDong2(int a[][100], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
			flag = 1;
	}
	return flag;
}
int ktDong3(int a[][100], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] == 0)
			flag = 1;
	}
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (ktDong1(a, m, n, i) == 1 && ktDong2(a, m, n, i) == 1 && ktDong3(a, m, n, i) == 1)
			cout << i << setw(5);
	}
}