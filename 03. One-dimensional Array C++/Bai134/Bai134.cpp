#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100], b[100];
	int k, t;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k);

	cout << "\n\nMang thu 2 gom gia tri nguyen to cua cua mang 1: ";
	XayDung(a, k, b, t);
	Xuat(b, t);

	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
		}
	}
}
