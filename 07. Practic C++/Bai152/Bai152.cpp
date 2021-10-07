#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktChanLe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << endl;
	if (ktChanLe(b, k) == 1)
		cout << "Mang chan le";
	else
		cout << "Mang khong chan le";
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
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
int ktChanLe(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	if (n == 2)
	{
		if ((a[0] + a[1]) % 2 != 0)
			return 1;
		return 0;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0)
		if (ktChanLe(a, n - 1) == 1)
			return 1;
	return 0;
}