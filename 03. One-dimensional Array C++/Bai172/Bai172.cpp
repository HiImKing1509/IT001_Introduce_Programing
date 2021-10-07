#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Xuat(float[], int);
void NhapTang(float[], int&);

int main()
{
	float b[100];
	int k;
	NhapTang(b, k);
	cout << "\nMang tang dan: ";

	Xuat(b, k);
	return 1;
}
void NhapTang(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int j;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: ";
		cin >> a[i];
		float x = a[i];
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}