#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimGiaTri(b, k);
	if (LeDauTien(b, k) == 0)
		cout << "\nMang khong co so le";
	else
		cout << "\nSo chan lon nhat nho hon moi gia tri le cua mang: " << TimGiaTri(b, k);

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
		cout << a[i] << setw(6);
}
int LeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			return a[i];
	return 0;
}
int LeNhoNhat(int a[], int n)
{
	int lc = LeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}

