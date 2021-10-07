#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&, float&, float&);
void Xuat(float[], int, float, float);
void LietKe(float[], int, float, float);

int main()
{
	float b[100];
	int k;
	float x;
	float y;
	Nhap(b, k, x, y);
	cout << "Mang ban dau: ";
	Xuat(b, k, x, y);
	cout << "\nCac gia tri thuoc doan " << x << " va " << y << " la: ";
	LietKe(b, k, x, y);
	return 1;
}
void Nhap(float a[], int& n, float& x, float& y)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
	}
}
void Xuat(float a[], int n, float x , float y)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(float a[], int n, float x, float y)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
		{
			dem++;
			cout << a[i] << setw(8);
		}
	if (dem == 0)
		cout << "Khong co";
}