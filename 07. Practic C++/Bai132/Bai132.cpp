#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriChanDau(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int x = ViTriChanDau(b, k);
	if (x == -1)
		cout << "\nMang khong ton tai gia tri chan";
	else
		cout << "\nVi tri gia tri chan dau tien trong mang: " << ViTriChanDau(b, k);
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
int ViTriChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int t = ViTriChanDau(a, n - 1);
	if (t != -1)
		return t;
	if (a[n - 1] % 2 == 0)
		return n - 1;
	return -1;
}

