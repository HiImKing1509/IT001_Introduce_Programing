#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int);
void Xuat(float[], int);
float Xanhat(float[], int, float);
int main()
{
	float* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new float[n];
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	float x;cout << "\nNhap x: ";
	cin >> x;
	float kq = Xanhat(a, n, x);
	cout << "\nGia tri cach xa " << x << " nhat la: " << kq;
	return 1;
}
void Nhap(float a[], int n)
{

	srand(std::time(nullptr));
	if (n >= 0)
	{
		Nhap(a, n - 1);
		a[n - 1] = -100 + rand() / (RAND_MAX / 200.0);
	}

}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << fixed << setprecision(2) << a[n - 1];

}
float Xanhat(float a[], int n, float x)
{
	if (n == 1)
		return a[0];
	float lc = Xanhat(a, n - 1, x);
	if (abs(a[n - 1] - x) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}