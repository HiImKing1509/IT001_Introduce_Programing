#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienNhoNhat(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int x = HoanThienNhoNhat(b, k);
	if (x == -1)
		cout << "\nMang khong ton tai gia tri hoan thien";
	else
		cout << "\nGia tri hoan thien nho nhat trong mang: " << HoanThienNhoNhat(b, k);
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
int HoanThienNhoNhat(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = HoanThienNhoNhat(a, n - 1);
	if (ktHoanThien(a[n - 1]))
	{
		if (lc == -1 || a[n - 1] < lc)
			lc = a[n - 1];
	}
	return lc;
}

