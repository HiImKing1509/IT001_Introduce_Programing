#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int KtThuoc(int[], int, int[], int);
bool TanSuat(int[], int, int[],int);

int main()
{
	int a[100];
	int b[100];
	int k, h;
	Nhap(a, k);
	cout << "\nMang A: ";
	Xuat(a, k);
	cout << endl;
	Nhap(b, h);
	cout << "\nMang B: ";
	Xuat(b, h);
	cout << endl;
	int kq = KtThuoc(a, k, b, h);
	cout << "\n So lan xuat hien cua a trong b la: " << kq;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
bool TanSuat(int d[], int k, int c[],int n)
{
	int j = 0;
	for (int i = k - n; i < k; i++)
		if (d[i] != c[j])
			return false;
		else j = j + 1;
	return true;
}
int KtThuoc(int c[], int n, int d[], int k)
{
	if (k == n)
	{
		if (TanSuat(d, k, c,n))
			return 1;
		return 0;
	}
	int dem = KtThuoc(c, n, d, k - 1);
	if (TanSuat(d, k - 1, c, n))
		return dem++;
	return dem;

}