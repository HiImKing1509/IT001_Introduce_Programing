#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemCucDai(float[], int);
int DemCucTieu(float[], int);
int DemCucTri(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	DemCucTri(b, k);
	cout << "\nSo luong cuc tri trong mang: " << DemCucTri(b, k);
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
int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}
int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}
int DemCucTri(float a[], int n)
{
	int dem1 = DemCucDai(a, n);
	int dem2 = DemCucTieu(a, n);
	return (dem1 + dem2);
}