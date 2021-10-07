#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	HangChuc(k);

	TongGiaTri(b, k);
	cout << "\nTong cac gia tri co hang chuc = 5 trong mang: " << TongGiaTri(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}
int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (HangChuc(a[i]) == 5)
			s = s + a[i];
	}
	return s;
}