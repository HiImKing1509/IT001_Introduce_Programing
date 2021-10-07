#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100], b[100];
	int k, t;
	Nhap(a, k);
	cout << "Mang ban dau: ";
	Xuat(a, k);

	cout << "\n\nKet qua: ";
	XayDung(a, k, b, t);
	Xuat(b, t);

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
void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}