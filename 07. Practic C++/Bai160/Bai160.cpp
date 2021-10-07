#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Sapgiam(int [], int );
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	Sapgiam(b, k);
	cout << "\nMang sau khi sap giam la: ";
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
void Sapgiam(int a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0;i < n;i++)
		if (a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	Sapgiam(a, n - 1);
}