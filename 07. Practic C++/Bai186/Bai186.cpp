#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatXY(float, float);
void LietKeXY(float[], int);

int main()
{
	float b[100];
	int k, d;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nCac cap x,y trong mang: " << endl;
	LietKeXY(b, k);
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
void XuatXY(float x, float y)
{
	cout << fixed << setprecision(3) << x << ", " << y;
	cout << endl;
}
void LietKeXY(float a[], int n)
{
	if (n == 0 || n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
	{
		XuatXY(a[i], a[n - 1]);
		XuatXY(a[n - 1], a[i]);
		cout << endl;
	}
	LietKeXY(a, n - 1);
}
