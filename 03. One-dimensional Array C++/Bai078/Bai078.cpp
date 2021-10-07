#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TimX(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimX(b, k);
	cout << "\nDoan [-x,x] chua tat ca cac gia tri cua mang la: [" << -TimX(b, k) << ", " << TimX(b, k) << "]";
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
float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}