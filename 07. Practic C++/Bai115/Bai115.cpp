#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int);
void Xuat(float[], int);
float TimX(float[], int);
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
	float kq = TimX(a, n);
	cout << "\nGia tri can tim la: "<<kq;
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
float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float lc = TimX(a, n - 1);
	if (abs(a[n - 1]) > abs(lc))
		lc = abs(a[n - 1]);
	return lc;
}