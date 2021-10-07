#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktTonTai(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (ktTonTai(b, k) == 0)
		cout << "\nMang khong ton tai hai gia tri 0 lien tiep";
	else if (ktTonTai(b, k) == 1)
		cout << "\nMang ton tai hai gia tri 0 lien tiep";
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (5 + 1) + 0;
	}
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << a[n - 1] << setw(3);
}
int ktTonTai(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (a[n - 1] == 0 && a[n - 2] == 0)
		return 1;
	ktTonTai(a, n - 1);
}