#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int ChanMin(int[], int);
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
	int kq = ChanMin(a, n);
	cout << "\nGia tri chan nho nhat la: "<<kq;
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
int ChanMin(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanMin(a, n - 1);
	if (a[n - 1] % 2 != 0)
		return lc;
	if (lc == -1)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}