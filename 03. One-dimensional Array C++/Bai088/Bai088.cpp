#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
int ChinhPhuongDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ChinhPhuongDau(b, k) == -1)
		cout << "\nMang khong co so chinh phuong";
	else
		cout << "\nGia tri chinh phuong dau tien trong mang la: " << ChinhPhuongDau(b, k);
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
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
int ChinhPhuongDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
			return a[i];
	return -1;
}