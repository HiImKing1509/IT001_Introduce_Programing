#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
void XuatConl(int[], int);

int main()

{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << endl;
	XuatConl(b, k);
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
	{
		cout << setw(6) << a[i];
	}
}
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		cout << setw(6) << a[vt + i];
}
void XuatConl(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		cout << "\nMang con do dai " << l << " la: " << endl;
		for (int vt = 0; vt < n - l + 1; vt++)
		{
			XuatCon(a, n, vt, l);
			cout << "\n";
		}
		cout << endl;
	}
}