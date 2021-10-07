#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void QuickSort(float[], int, int);
int Partition(float[], int, int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int dd, cc;
	cout << "\nNhap doan can sap xep: ";
	cin >> dd >> cc;
	cout << "\nmang sau khi sap xep la:  ";
	QuickSort(b, dd, cc);
	for (int i = dd; i <= cc; i++)
		cout << b[i] << "  ";
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
void QuickSort(float a[], int d, int c)
{
	if (d < c)
	{
		int v = Partition(a, d, c);
		QuickSort(a, d, v - 1);
		QuickSort(a, v + 1, c);
	}
}
int Partition(float a[], int d, int c)
{
	float tt = a[c];
	int vt = d - 1;
	for (int i = d; i <= c; i++)
	{
		if (a[i] < tt)
		{
			vt++;
			swap(a[i], a[vt]);
		}
	}
	vt = vt + 1;
	swap(a[vt], a[c]);
	return vt;
}