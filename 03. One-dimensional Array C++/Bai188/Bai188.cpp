#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCon(float[], int, int, int);
void ConLonNhat(float[], int, int&, int&);

int main()
{
	float b[100];
	int k, t, c;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;

	cout << "\nMang con co tong lon nhat trong mang ban dau: ";
	ConLonNhat(b, k, t, c);
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
void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
		}
	}
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << setw(10);
}