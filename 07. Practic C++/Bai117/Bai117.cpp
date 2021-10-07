#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (AmDau(b, k) == 0)
		cout << "\nMang khong co gia tri am";
	else
		cout << "\nGia tri am dau tien cua mang: " << AmDau(b, k);
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
float AmDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] < 0)
		return a[n - 1];
	return 0;
}
