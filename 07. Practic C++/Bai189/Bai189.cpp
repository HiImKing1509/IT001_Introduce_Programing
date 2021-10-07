#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Dem2Chan(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nSo luong cac cap (x,y) chan trong mang: " << Dem2Chan(b, k);
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
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
int Dem2Chan(int a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = Dem2Chan(a, n - 1);
	if (a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
		dem++;
	return dem;
}

