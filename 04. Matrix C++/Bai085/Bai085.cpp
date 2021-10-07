#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ChinhPhuongDau(int[][100], int, int);
int ChinhPhuongLonNhat(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: " << endl;
	Xuat(b, k, l);

	if (ChinhPhuongDau(b, k, l) == -1)
		cout << "Ma tran khong ton tai gia tri chinh phuong";
	else
		cout << "Gia tri chinh phuong lon nhat trong ma tran: " << ChinhPhuongLonNhat(b, k, l);
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
	for (int i = 1; i < k; i++)
		if (i * i == k)
		return true;
	return false;
}
int ChinhPhuongDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktChinhPhuong(a[i][j]))
				return a[i][j];
		}
	}
	return -1;
}
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	float ln = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktChinhPhuong(a[i][j]) && a[i][j] > ln)
				ln = a[i][j];
		}
	}
	return ln;
}