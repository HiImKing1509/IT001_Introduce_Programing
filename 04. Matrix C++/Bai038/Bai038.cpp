#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang5m(int);
int Tong5m(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, g;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap dong d: ";
	cin >> g;

	cout << "Tong cac gia tri dang 5^m tren dong " << g << " trong ma tran: " << Tong5m(b, k, l, g);
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
bool ktDang5m(int n)
{
	if (n < 0)
		return false;
	int t = abs(n);
	while (t != 1)
	{
		if (t % 5 != 0)
			return false;
		t = t / 5;
	}
	return true;
}
int Tong5m(int a[][100], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktDang5m(a[d][j]))
			s = s + a[d][j];
	}
	return s;
}