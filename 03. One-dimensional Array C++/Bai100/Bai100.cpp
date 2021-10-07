#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	AmDau(b, k);
	AmLonNhat(b, k);
	if (AmDau(b, k) == 1)
		cout << "\nMang khong co gia tri am";
	else
		cout << "\nGia tri am lon nhat trong mang la: " << AmLonNhat(b, k);
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
float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 1;
}
float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 1)
		return 1;
	for (int i = 0; i < n; i++)
		if (a[i] < 0 && a[i] > lc)
			lc = a[i];
	return lc;
}