#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TongChinhPhuong(int[], int);
bool KtChinhPhuong(int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong Chinh Phuong day la: ";
	int kq = TongChinhPhuong(b, k);
	cout << kq;
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
		cout << setw(6) << fixed << setprecision(3) << a[i];
	}
}
bool KtChinhPhuong(int k)
{
	int t = sqrt(k);
	if (t * t == k)
		return true;
	else 
	    return false;
}
int TongChinhPhuong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongChinhPhuong(a, n - 1);
	if (KtChinhPhuong(a[n-1]) && a[n-1]>0)
           s=s+ a[n - 1];
	return s;
}
