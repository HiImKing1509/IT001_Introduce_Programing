#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	DuongDau(b, k);
	DuongNhoNhat(b, k);
	LietKe(b, k);
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
float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}
float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co gia tri duong trong mang";
		return;
	}
	cout << "\nVi tri cac gia tri duong nho nhat trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == dd)
			cout << i << " " << setw(10);
}