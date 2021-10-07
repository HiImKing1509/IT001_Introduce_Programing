#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100], b[200];
	int k, t;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k);

	cout << "\n\nMang co tinh chan le: ";
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
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
}
