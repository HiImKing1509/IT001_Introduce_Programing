#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float CuoiCung(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	CuoiCung(b, k);
	if (CuoiCung(b, k) == 0)
		cout << "\nMang khong co gia tri am lon hon -1";
	else
		cout << "\nGia tri am cuoi cung lon hon -1 trong mang la: " << CuoiCung(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] <0 && a[i]>-1)
			return a[i];
	return 0;
}