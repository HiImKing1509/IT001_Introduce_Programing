#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float*, int&);
void Xuat(float*, int);
void LietKe(float*, int, float, float);

int main()
{
	float* b;
	int k;
	cout << "Nhap n: ";
	cin >> k;

	b = new float[k];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	float g, h;
	cout << "\nNhap x: ";
	cin >> g;
	cout << "Nhap y: ";
	cin >> h;

	cout << "\nCac gia tri thuoc doan [" << g << "," << h << "] trong mang: ";
	LietKe(b, k, g, h);
	delete[]b;
	return 1;
}
void Nhap(float* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(float* a, int n, float x, float y)
{
	for (int i = 0; i < n; i++)
		if (x <= a[i] && a[i] <= y)
			cout << fixed << setprecision(3) << a[i] << setw(10);
}
