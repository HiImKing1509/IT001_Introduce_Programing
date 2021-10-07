#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int KtChPhuong(int);
int ChPhuongdau(int[], int);
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
	int kq = ChPhuongdau(a, n);
	if (kq != -1)
		cout << "\nGia tri chinh phuong dau tien cua mang la: " << kq;
	else
		cout <<"\n"<< -1;
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
int KtChPhuong(int n)
{
	if (n <= 0)
		return 0;
	for (int i = 1;i < n;i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}
int ChPhuongdau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChPhuongdau(a, n - 1);
	if (lc != -1)
		return lc;
	if (KtChPhuong(a[n - 1]) == 1)
	{
	    lc = a[n - 1];
		return lc;
	}

	return -1;
}