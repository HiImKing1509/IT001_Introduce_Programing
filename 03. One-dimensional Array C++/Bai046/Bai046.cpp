#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
int TrungBinhCong(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	
	TrungBinhCong(b, k);
	cout << "\nTrung binh cong cua cac so nguyen to trong mang la: " << TrungBinhCong(b, k);
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
int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (ktNguyenTo(a[i]))
			dem++;
	return dem;
}
int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n; i++)
		if (ktNguyenTo(a[i]))
			s = s + a[i];
	return s;
}
int TrungBinhCong(int a[], int n)
{
	float s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}