#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int Chusodau(int);
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
	int kq = Tong(a, n);
	cout << "\nTong cac gia tri co chu so dau le la: " << kq;
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
int Chusodau(int n)
{
	int t = abs(n);
	if (t <= 9)
		return t;
	while (t > 9)
	{
		t = t / 10;
	}
	return t;
}
int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = Tong(a, n - 1);
	if (Chusodau(a[n - 1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}