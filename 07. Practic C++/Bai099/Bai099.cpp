#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
float Tong(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nMang cac gia tri: ";
	LietKe(b, k);

	cout << "\nTong gia tri: " << Tong(b, k);
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
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] > a[n - 2])
		cout << fixed << setprecision(3) << a[n - 1] << setw(10);
	LietKe(a, n - 1);
}
float Tong(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = Tong(a, n - 1);
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}
