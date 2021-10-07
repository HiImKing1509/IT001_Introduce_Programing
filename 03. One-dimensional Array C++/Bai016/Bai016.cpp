#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&, int&, int&);
void Xuat(int[], int, int, int);
void LietKe(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	int x;
	int y;
	Nhap(b, k, x, y);
	cout << "Mang ban dau: ";
	Xuat(b, k, x, y);
	cout << "\nCac gia tri chan thuoc doan " << x << " va " << y << " la: ";
	LietKe(b, k, x, y);
	return 1;
}
void Nhap(int a[], int& n, int& x, int& y)
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
void Xuat(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(3) << a[i] << setw(10);
}
void LietKe(int a[], int n, int x, int y)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y && a[i] % 2 == 0)
		{
			dem++;
			cout << a[i] << setw(8);
		}
	if (dem == 0)
		cout << "Khong co";
}