#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int&);

int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	cout << "Mang thu 1: ";
	Xuat(a, k);
	cout << endl;

	int b[100];
	int t;
	Nhap(b, t);
	cout << "Mang thu 2: ";
	Xuat(b, t);
	cout << endl;

	ktHoanVi(a, k, b, t);
	if (ktHoanVi(a, k, b, t) == 1)
		cout << "\nMang 2 la hoan vi cua mang 1";
	else
		cout << "\nMang 2 khong la hoan vi cua mang 1";

	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (20 + 1) - 10;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void SapTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(int a[], int n, int b[], int& m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
