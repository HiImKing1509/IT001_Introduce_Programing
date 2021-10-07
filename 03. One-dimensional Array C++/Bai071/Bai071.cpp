#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

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

	DemXuatHien(a, k, b, t);
	cout << "\n\nSo lan mang 1 xuat hien trong mang 2: " << DemXuatHien(a, k, b, t);
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
int DemXuatHien(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}