#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DaoMang(float[], int);
void DaoDuong(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	DaoDuong(b, k);
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
void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}
void DaoDuong(float a[], int n)
{
	cout << "\n\nMang dao cac gia tri duong: ";
	float b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			a[i] = b[k++];
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(10);
}