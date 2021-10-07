#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
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
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(float a[], int n)
{
	cout << "\nCac gia tri cuc tri trong mang: ";
	if (n == 1)
		return;

	if (a[0] > a[1] || a[0] > a[1])
		cout << a[0] << " " << setw(10);

	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1] || a[i] > a[i - 1] && a[i] > a[i + 1])
			cout << a[i] << " " << setw(10);

	if (a[n - 1] < a[n - 2] || a[n - 1] > a[n - 2])
		cout << a[n - 1] << " " << setw(10);
}