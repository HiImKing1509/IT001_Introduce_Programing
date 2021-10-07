#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DayTang(float[], int,int);
int DemConTang(float[], int,int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int kq = DemConTang(b, k,k);
	cout << "\nSo luong day con tang la: " << kq;
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
int DayTang(float a[], int n, int i)
{
	int j = i;
	while (j < n && a[j] < a[j + 1])
		j++;
	return j - i;
}
int DemConTang(float a[],int n,int m)
{
	if (n == 0)
		return DayTang(a, m, 0);
	int dem = DemConTang(a, n - 1,m);
	if (DayTang(a, m, n - 1) > 0)
		dem = dem + DayTang(a, m, n - 1);
	return dem;
}