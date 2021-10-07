#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
int DemLonNhat(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nGia tri lon nhat trong mang: " << LonNhat(b, k);
	cout << "\nSo luong gia tri lon nhat trong mang: " << DemLonNhat(b, k);

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
float LonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
int DemLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		return 1;
	int dem = DemLonNhat(a, n - 1);
	if (a[n - 1] == lc)
		dem++;
	return dem;
}
