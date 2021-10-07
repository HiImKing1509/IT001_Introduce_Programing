#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
int ToanLeLonNhat(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int x = ToanLeLonNhat(b, k);
	if (x == 0)
		cout << "\nMang khong ton tai gia tri toan chu so le";
	else
		cout << "\nGia tri toan chu so le lon nhat trong mang: " << ToanLeLonNhat(b, k);
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
bool ktToanLe(int k)
{
	for (int t = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
	}
	return true;
}
int ToanLeLonNhat(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = ToanLeLonNhat(a, n - 1);
	if (ktToanLe(a[n - 1]))
	{
		if (lc == 0 || a[n - 1] > lc)
			lc = a[n - 1];
	}
	return lc;
}

