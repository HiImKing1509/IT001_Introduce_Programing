#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	ktChinhPhuong(k);
	LietKe(b, k);

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
bool ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void LietKe(int a[], int n)
{
	cout << "\nCac vi tri gia tri so chinh phuong trong mang: ";
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
		{
			cout << i << " " << setw(6);
			dem++;
		}
	if (dem == 0)
		cout << "Khong co ";
}

