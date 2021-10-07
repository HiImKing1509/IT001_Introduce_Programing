#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
void XuatBo3(float, float, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKe(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (200.0));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << fixed << setprecision(3) << a[i];
	}
}
void XuatBo3(float x, float y, float z)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	for (int i = 0; i <= n - 3; i++)
		for (int j = i + 1; j <= n - 2; j++)
		{
			if (a[i] == (a[j] + a[n - 1]))
			{
				XuatBo3(a[i], a[j], a[n - 1]);
				XuatBo3(a[i], a[n - 1], a[j]);
			}
			if (a[j] == (a[i] + a[n - 1]))
			{
				XuatBo3(a[j], a[i], a[n - 1]);
				XuatBo3(a[j], a[n - 1], a[i]);
			}
			if (a[n - 1] == (a[i] + a[j]))
			{
				XuatBo3(a[n - 1], a[i], a[j]);
				XuatBo3(a[n - 1], a[j], a[i]);
			}
		}
	LietKe(a, n - 1);
}