#include <iostream>
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
	cout << "Mang ban dau: ";
	Xuat(b, k);

	NguyenHoa(b, k);
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
void NguyenHoa(float a[], int n)
{
	cout << "\n\nMang nguyen hoa: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
	}
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(0) << a[i] << setw(5);
}