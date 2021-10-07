#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDuongDau(float[], int);
float TongCon(float [], int, int, int);
int ktCon(float[], int, int, int);
void DuongLonNhat(float[], int, int&, int&);

int main()
{
	float b[100];
	int k, t, c;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;

	cout << "\nMang con toan duong co tong lon nhat trong mang ban dau: ";
	DuongLonNhat(b, k, t, c);
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
		cout << fixed << setprecision(3) << a[i] << setw(10);
	}
}
float TongCon(float a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int max = 0;
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}
	float smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1 && TongCon(a, n, vt, l) > smax && l > max)
			{
				max = l;
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, n, vt, l);
			}
		}
	}
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << setw(10);
}