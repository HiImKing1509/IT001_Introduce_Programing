#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang2m(int);
int TimDang2mDau(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int x = TimDang2mDau(b, k);
	if (x == 0)
		cout << "\nMang khong ton tai gia tri dang 2^m";
	else
		cout << "\nGia tri dang 2^m dau tien trong mang: " << TimDang2mDau(b, k);
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
bool ktDang2m(int k)
{
	if (k <= 0)
		return false;
	for (int t = k; t > 1; t = t / 2)
	{
		int dv = t % 2;
		if (dv != 0)
			return false;
	}
	return true;
}
int TimDang2mDau(int a[], int n)
{
	if (n == 0)
		return 0;
	int t = TimDang2mDau(a, n - 1);
	if (t != 0)
		return t;
	if (ktDang2m(a[n - 1]))
		return a[n - 1];
	return 0;
}

