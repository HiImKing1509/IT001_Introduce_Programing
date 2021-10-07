#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
bool ktNguyenTo(int);
void XoaNguyenTo(int[], int&);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	XoaNguyenTo(b, k);
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
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void XoaNguyenTo(int a[], int& n)
{
	cout << "\nMang sau khi xoa: ";
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
			XoaViTri(a, n, i);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
