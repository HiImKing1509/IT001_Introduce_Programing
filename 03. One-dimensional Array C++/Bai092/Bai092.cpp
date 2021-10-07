#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (TimGiaTri(b, k) == 0)
		cout << "\nMang khong co gia co chu so dau tien la so le";
	else
		cout << "\nSo dau tien co chu so dau tien la chu so le trong mang: " << TimGiaTri(b, k);
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
int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t = t / 10;
	return t;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			return a[i];
	return 0;
}