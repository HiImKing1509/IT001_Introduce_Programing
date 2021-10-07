#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	DemGiaTri(b, k);
	cout << "\nSo luong cac phan tu ke nhau ma ca hai deu chan la: " << DemGiaTri(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int DemGiaTri(int a[], int n)
{
	if (n <= 1)
		return 0;

	int dem = 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;

	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;

	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}