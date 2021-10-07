#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

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

	DemGiaTri(a, k, b, t);
	cout << "\n\nSo luong gia tri chi xuat hien mot trong hai mang: " << DemGiaTri(a, k, b, t);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}

	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}