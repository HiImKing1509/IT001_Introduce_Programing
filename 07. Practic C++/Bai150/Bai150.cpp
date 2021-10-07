#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ktTonTai(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktTonTai(b, k) == 1)
		cout << "\nMang khong ton tai gia tri hoan thien > 256";
	else if (ktTonTai(b, k) == 0)
		cout << "\nMang ton tai gia tri hoan thien > 256";
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (2000 + 1) - 1000;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(7);
}
bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
			s = s + i;
	}
	if (s == k && s != 0)
		return true;
	return false;
}
int ktTonTai(int a[], int n)
{
	if (n == 0)
		return 0;
	if (!(ktHoanThien(a[n - 1]) && a[n - 1] > 256))
		return 1;
	ktTonTai(a, n - 1);
}
