#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int);
void Xuat(float[], int);
float AmMax(float[], int);
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
	float kq = AmMax(a, n);
	if (kq != 0)
		cout << "\ngia tri am lon nhat trong mang la: "<<kq;
	else
		cout << "\n " << 0;
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
float AmMax(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmMax(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
