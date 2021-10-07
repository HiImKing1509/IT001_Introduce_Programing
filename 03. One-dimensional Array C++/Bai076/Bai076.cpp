#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int, float);
float TimViTri(float[], int, float);


int main()
{
	float b[100];
	int k;
	float x;
	Nhap(b, k, x);
	cout << "Mang ban dau: ";
	Xuat(b, k, x);

	int vt = TimViTri(b, k, x);
	cout << "\nVi tri gia tri gan gia tri " << x << " nhat la: " << vt;
	return 1;
}
void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n, float x)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
float TimViTri(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}