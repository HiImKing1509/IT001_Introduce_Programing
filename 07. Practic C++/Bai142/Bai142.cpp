#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int Ktdang5m(int);
int lonnhat(int[], int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	int kq = lonnhat(a, n);
	if (kq != 0)
		cout << "\nGia tri lon nhat co dang 5^m la: " << kq;
	else
		cout << "\n" << 0;
	return 1;
}
void Nhap(int a[], int n)
{

	srand(std::time(nullptr));
	if (n >= 0)
	{
		Nhap(a, n - 1);
		a[n - 1] = rand() % (200 + 1) - 100;
	}

}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}
int Ktdang5m(int n)
{
	if (n <= 0)
		return 0;
	int t = n;
	while (t != 1)
	{
		if (t % 5 != 0)
			return 0;
		t = t / 5;
	}
	return 1;
}
int lonnhat(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = lonnhat(a, n - 1);
	if (!Ktdang5m(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}