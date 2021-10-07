#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TimViTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (TimViTri(b, k) == -1)
		cout << "\nMang khong co gia tri thoa yeu cau de bai";
	else
		cout << "\nVi tri gia tri thoa yeu cau de bai trong mang la: " << TimViTri(b, k);
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
int TimViTri(int a[], int n)
{
	for (int i = 1; i < n - 1; i++)
		if (a[i] == (a[i - 1] * a[i + 1]))
			return i;
	return -1;
}