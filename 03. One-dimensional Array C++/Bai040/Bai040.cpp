#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TongCucTieu(b, k);
	cout << "\nTong cac gia tri cuc tieu trong mang: " << TongCucTieu(b, k);
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
float TongCucTieu(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s = s + a[0];

	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s = s + a[i];

	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}