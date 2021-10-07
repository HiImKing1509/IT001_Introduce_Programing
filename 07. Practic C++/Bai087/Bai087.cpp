#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	int g, h;
	cout << "\nNhap x: ";
	cin >> g;
	cout << "Nhap y: ";
	cin >> h;

	cout << "Mang cac gia tri chan thuoc [" << g << "," << h << "]: ";
	LietKe(b, k, g, h);
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
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(5);
}
void LietKe(int a[], int n, int x, int y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] % 2 == 0 && x <= a[n - 1] && a[n - 1] <= y)
		cout << a[n - 1] << setw(5);
}

