#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriDau(float[], int, float, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	float g, h;
	cout << "\nNhap x: ";
	cin >> g;
	cout << "Nhap y: ";
	cin >> h;
	if (g > h)
		cout << "\nKhong hop le";

	if (GiaTriDau(b, k, g, h) == 0)
		cout << "Mang khong co gia tri thuoc [" << g << ", " << h << "]";
	else
		cout << "Gia tri thuoc [" << g << ", " << h << "] dau tien trong mang: " << GiaTriDau(b, k, g, h);
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
float GiaTriDau(float a[], int n, float x, float y)
{
	if (n == 0)
		return 0;
	float lc = GiaTriDau(a, n - 1, x, y);
	if (lc != 0)
		return lc;
	if (x <= a[n - 1] && a[n - 1] <= y)
		return a[n - 1];
	return 0;
}
