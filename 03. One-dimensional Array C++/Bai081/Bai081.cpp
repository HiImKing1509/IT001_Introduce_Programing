#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	DauTien(b, k);
	if (DauTien(b, k) == 0)
		cout << "\nMang khong co gia tri lon hon 2003";
	else
		cout << "\nGia tri lon hon 2003 dau tien trong mang la: " << DauTien(b, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -2500 + rand() / (RAND_MAX / (2500.0 - (-2500.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(15);
}
float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
	return 0;
}