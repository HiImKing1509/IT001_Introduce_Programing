#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktTangDan(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktTangDan(b, k) == 1)
		cout << "\nMang tang dan";
	else if (ktTangDan(b, k) == 0)
		cout << "\nMang khong tang dan";
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
int ktTangDan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || (a[n - 2] <= a[n - 1] && ktTangDan(a, n - 1) == 1))
		return 1;
	return 0;
}
