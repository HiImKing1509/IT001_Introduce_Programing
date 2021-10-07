#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int KtNgTo(int);
int NgTocuoi(int[], int);
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
	int kq = NgTocuoi(a, n);
	if (kq != -1)
		cout << "\nGia tri chinh phuong dau tien cua mang la: " << kq;
	else
		cout << "\n" << -1;
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
	if (n <= 0)
		return 0;
	int d = 0;
	for (int i = 1;i <= n;i++)
	{
		if (n % i == 0)
			d++;
	}
	if (d == 2)
		return 1;
	return 0;
}
int NgTocuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (KtNgTo(a[n - 1]) == 1)
	{
		return a[n - 1];
	}
	return NgTocuoi(a, n - 1);
}