#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&, int&, int&);
void Xuat(int[], int, int, int);
int DauTien(int[], int, int, int);

int main()
{
	int b[100];
	int k, x, y;
	Nhap(b, k, x, y);
	cout << "Mang ban dau: ";
	Xuat(b, k, x, y);

	if (DauTien(b, k, x, y) == x)
		cout << "\nMang khong co gia tri thuoc [" << x<<", " << y << "]";
	else
		cout << "\nGia tri thuoc [" << x<<", " << y << "] dau tien trong mang la: " << DauTien(b, k, x, y);
	return 1;
}
void Nhap(int a[], int& n, int& x, int& y)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}