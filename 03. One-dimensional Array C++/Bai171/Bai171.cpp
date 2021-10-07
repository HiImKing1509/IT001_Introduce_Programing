#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Xuat(float[], int);
void NhapGiam(float[], int&);

int main()
{
	float b[100];
	int k;
	NhapGiam(b, k);
	cout << "\nMang giam dan: ";
	
	Xuat(b, k);
	return 1;
}
void NhapGiam(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int j;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "\nNhap a[" << i << "]: ";
		cin >> x;
		for (j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}