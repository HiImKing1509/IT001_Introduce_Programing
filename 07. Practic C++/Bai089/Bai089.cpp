#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
float NhoNhat(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\ncac phan tu cua mang: ";
	Xuat(b, k);
	cout << endl;
	cout << "Cac vi tri co gia tri thoa man: ";
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
float NhoNhat(float a[],int k)
{
	float lc=a[0];
	for (int i = 0; i < k; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float nn = NhoNhat(a, n-1);
	if (a[n - 1] < nn)
	{
		cout << setw(10) << n - 1;
		return;
	}

	if (a[n - 1] == nn)
		cout << setw(10) << n - 1;
	LietKe(a, n - 1);
}
