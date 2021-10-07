#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemMangGiam(float[], int, int);
bool ktMangGiam(float[], int, int, int);

int main()
{
	float b[100];
	int k;
	int vt = 2;
	Nhap(b, k);
	cout << "Mang ban dau: " << endl;
	Xuat(b, k);

	cout << "\n";
	int kq = DemMangGiam(b, k, vt);
	cout << "\nSo luong mang con giam: " << kq;

	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setw(10) << setprecision(2) << a[i];
}
bool ktMangGiam(float a[], int n, int vt, int i)
{
	for (int j = i; j < i + vt - 1; j++)
	{
		if (a[j] < a[j + 1])
			return false;
	}
	return true;
}
int DemMangGiam(float a[], int n, int vt)
{
	int s = 0;
	if (vt == n)
		return s;
	for (int i = 0; i <= n - vt; i++)
	{
		if (ktMangGiam(a, n, vt, i))
		{
			s++;
		}
	}
	s = s + DemMangGiam(a, n, vt + 1);
	return s;
}