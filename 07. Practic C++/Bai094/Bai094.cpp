#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int Chusohangchuc(int);
int Tong(int[], int);
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
	int kq=Tong(a, n);
	cout << "\nTong cac gia tri co chu so hang chuc bang 5 la: "<<kq;

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
int Chusohangchuc(int n)
{
	int t = abs(n);
	if (t <= 9)
		return 0;
	while (t >= 59)
	{
		t = t / 10;
	}
	return t %10;
}
int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = Tong(a, n - 1);
	if (Chusohangchuc(a[n - 1]) == 5)
		s = s + a[n - 1];
	return s;
}