#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int b[100];
	int k;
	cout << "Nhap n: ";
	cin >> k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	return 1;
}
void Nhap(int a[], int& n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
