#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ThemVT(int [], int , int ,int );
int main()
{
	int b[100];
	int k;
	int x;
	int vt;
	Nhap(b, k);
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	cout << "\nNhap gia tri can them : ";
	cin >> x;
	cout << "\nNhap vi tri can the cho: ";
	cin >> vt;
	ThemVT(b, k,x,vt);
	cout << "\nMang sau khi dich phai xoay vong la: ";
	Xuat(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "nhap n = ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0;i < n;i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(6) << a[i];
}
void ThemVT(int a[], int n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	swap(a[vt], x);
	ThemVT(a, n, x, vt + 1);
}