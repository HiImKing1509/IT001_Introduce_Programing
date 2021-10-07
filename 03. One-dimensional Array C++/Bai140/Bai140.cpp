#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void HoanVi(int&, int&);
void NguyenToTang(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	NguyenToTang(b, k);
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
bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void NguyenToTang(int a[], int n)
{
	cout << "\n\nMang co cac gia tri nguyen to tang dan la: ";
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (ktNguyenTo(a[i]) && ktNguyenTo(a[j]) && a[i] > a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << a[i] << " " << setw(5);
}