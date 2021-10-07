#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << endl;
	int kq = TimGiaTri(b, k);
	cout << "chu so xuat hien nhieu nhat la: " << b[kq];
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimGiaTri(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimGiaTri(a, n - 1);
	if (TanSuat(a, n, a[n - 1]) > TanSuat(a, n, a[lc]))
		lc = n - 1;
	return lc;
}