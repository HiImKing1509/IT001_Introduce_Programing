#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void NguyenHoa(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nDay sau khi nguyen hoa la: ";
	NguyenHoa(b,  k);
	for (int i = 0; i < k; i++)
		cout << b[i] << "   ";
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
void NguyenHoa(float a[], int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, n - 1);
	if (a[n - 1] > 0)
		a[n - 1] = int(a[n - 1] + 0.5);
	else
		a[n - 1] = int(a[n - 1] - 0.5);
}