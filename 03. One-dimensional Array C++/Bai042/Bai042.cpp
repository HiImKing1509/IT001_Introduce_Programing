#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TongGiaTri(b, k);
	cout << "\nTong cac gia tri lon hon tri tuyet doi cua gia tri dung lien sau trong mang: " << TongGiaTri(b, k);
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
float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	return s;
}