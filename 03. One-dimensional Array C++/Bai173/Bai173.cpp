#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);

int main()
{
	int b[100];
	int k, c, d;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nNhap do dai mang con: ";
	cin >> d;
	cout << "Nhap vi tri bat dau xuat mang con: ";
	cin >> c;
	cout << "Mang con co do dai " << d << " va bat dau tu vi tri " << c << " la: ";
	XuatCon(b, k, c, d);
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
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(6) << a[vt + i];
}