#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ViTriLeTang(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	ViTriLeTang(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void ViTriLeTang(int a[], int n)
{
	cout << "\n\nMang co vi tri le co gia tri tang dan: ";
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << a[i] << " " << setw(5);
}