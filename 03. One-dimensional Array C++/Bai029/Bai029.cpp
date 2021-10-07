#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	ChanDau(b, k);
	ChanLonNhat(b, k);
	LietKe(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanLonNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n)
{
	int dd = ChanLonNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co gia tri chan trong mang";
		return;
	}
	cout << "\nVi tri cac gia tri chan lon nhat trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == dd)
			cout << i << " " << setw(4);
}