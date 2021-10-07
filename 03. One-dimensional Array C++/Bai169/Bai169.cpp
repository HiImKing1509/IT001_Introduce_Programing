#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);

int main()
{
	float b[100];
	int k, t;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\n\nNhap gia tri can them: ";
	cin >> x;
	cout << "Nhap vi tri them: ";
	cin >> t;

	ThemViTri(b, k, x, t);
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
void ThemViTri(float a[], int& n, float x, int k)
{
	cout << "\nMang sau khi them: ";
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}