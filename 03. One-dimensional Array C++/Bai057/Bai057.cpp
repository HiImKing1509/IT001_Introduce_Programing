#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TuongQuan(b, k);
	if (TuongQuan(b, k) == 0)
		cout << "\nSo luong so chan bang so luong so le";
	else if (TuongQuan(b, k) == 1)
		cout << "\nSo luong so chan it hon so luong so le";
	else if (TuongQuan(b, k) == -1)
		cout << "\nSo luong so chan nhieu hon so luong so le";
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
int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}
int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}
int TuongQuan(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		return -1;
	if (x < y)
		return 1;
	return 0;
}