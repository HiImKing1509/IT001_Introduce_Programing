#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int DemGT(int[], int);
int KtNgTo(int);
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
	int kq = DemGT(a, n);
	cout << "\nCo " << kq << " gia tri trong mang la so nguyen to";
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
int KtNgTo(int n)
{
	if (n <= 1)
		return 0;
	int d = 0;
	for (int i = 1;i <= n;i++)
	{
		if (n % i == 0)
			d++;
	}
	if (d != 2)
		return 0;
	return 1;
}
int DemGT(int a[], int n)
{
	if (n == 0)
		return 0;
	int d = DemGT(a, n - 1);
	if (KtNgTo(a[n-1])==1)
		d++;
	return d;
}
