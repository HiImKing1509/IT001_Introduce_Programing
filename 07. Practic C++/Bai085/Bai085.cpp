#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int KTChPhuong(int);
void Lietke(int[], int);
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
	cout << "\nCac vi tri gia tri chinh phuong trong mang la: ";
	Lietke(a, n);
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
int KTChPhuong(int n)
{
	if (n <= 0)
		return 0;
	for (int i = 1;i <= n;i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}
void Lietke(int a[], int n)
{
	if (n == 0)
		return;
	Lietke(a, n - 1);
	{
		if (KTChPhuong(a[n - 1]) == 1)
			cout << "  " << n - 1;
	}
}