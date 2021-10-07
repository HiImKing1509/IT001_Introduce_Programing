#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&, int&);
void Xuat(int[], int, int);
int TanSuat(int[], int, int);

int main()
{
	int b[100];
	int k;
	int x;
	Nhap(b, k, x);
	cout << "Mang ban dau: ";
	Xuat(b, k, x);

	TanSuat(b, k, x);
	cout << "\nSo luong gia tri " << x << " co trong mang: " << TanSuat(b, k, x);
	return 1;
}
void Nhap(int a[], int& n, int& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}