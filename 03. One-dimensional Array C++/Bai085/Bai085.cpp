#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanCuoi(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ChanCuoi(b, k) == -1)
		cout << "\nMang khong co so chan";
	else
		cout << "\nGia tri chan cuoi cung trong mang la: " << ChanCuoi(b, k);
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
int ChanCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}