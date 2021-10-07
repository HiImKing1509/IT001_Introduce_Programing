#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmCuoi(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (AmCuoi(b, k) == 0)
		cout << "\nMang khong co gia tri am thuoc (-1,0)";
	else
		cout << "\nGia tri am cuoi cung thuoc (-1,0) cua mang: " << AmCuoi(b, k);
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
float AmCuoi(float a[], int n)
{
	if (n == 0)
		return 0;
	if (-1 < a[n - 1] && a[n - 1] < 0)
		return a[n - 1];
	return AmCuoi(a, n - 1);
}
