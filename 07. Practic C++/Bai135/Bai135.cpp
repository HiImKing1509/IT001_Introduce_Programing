#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DuongNhoNhat(float[], int);
int TimViTri(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nGia tri duong nho nhat trong mang: " << DuongNhoNhat(b, k);
	cout << "\nVi tri gia tri duong nho nhat trong mang: " << TimViTri(b, k);

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
float DuongNhoNhat(float a[], int n)
{
	if (n == 0)
		return -1;
	float lc = DuongNhoNhat(a, n - 1);
	if (a[n - 1] > 0)
	{
		if (lc == -1 || a[n - 1] < lc)
			lc = a[n - 1];
	}
	return lc;
}
int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int i = TimViTri(a, n - 1);
	if (a[n - 1] <= 0)
		return i;
	if (i == -1)
		return n - 1;
	if (a[n - 1] < a[i])
		i = n - 1;
	return i;
}
