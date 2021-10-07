#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
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

	cout << "Tong cac gia tri chinh phuong tren cot " << h << " trong ma tran: " << TongCot(b, k, l, h);
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
bool ktChinhPhuong(int k)
{
	for (int i = 1; i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}
int TongCot(int a[][100], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (ktChinhPhuong(a[i][c]))
			s = s + a[i][c];
	}
	return s;
}