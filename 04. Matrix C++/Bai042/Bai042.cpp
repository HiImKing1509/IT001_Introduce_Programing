#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
int TongCot(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, h;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	cout << "Nhap cot c: ";
	cin >> h;

	cout << "Tong cac gia tri dang 2^m tren cot " << h << " trong ma tran: " << TongCot(b, k, l, h);
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
bool ktDang2m(int n)
{
	if (n < 0)
		return false;
	int t = abs(n);
	while (t != 1)
	{
		if (t % 2 != 0)
			return false;
		t = t / 2;
	}
	return true;
}
int TongCot(int a[][100], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (ktDang2m(a[i][c]))
			s = s + a[i][c];
	}
	return s;
}