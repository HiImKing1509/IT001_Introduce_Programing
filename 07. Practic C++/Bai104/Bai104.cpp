#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int,float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
    float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	cout << "so luong cac gia tri thoa man: ";
	int kq = TanSuat(b, k, x);
	cout << kq;
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
int TanSuat(float a[], int n,float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1,x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}
