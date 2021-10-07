#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int KTHoanthien(int);
int VTHoanthiencuoi(int[], int);
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
	int kq = VTHoanthiencuoi(a, n);
	if (kq != -1)
		cout << "\nVi tri cua so hoan thien cuoi cung co trong mang la: " << kq;
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
int KTHoanthien(int n)
{
	if (n <= 0)
		return 0;
	int s = 0;
	for (int i = 1;i < n;i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return 1;
}
int VTHoanthiencuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (KTHoanthien(a[n - 1]) == 1)
		return n - 1;
	return VTHoanthiencuoi(a,n-1);
}