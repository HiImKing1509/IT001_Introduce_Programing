#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang5m(int);
int DauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimGiaTri(b, k);
	if (DauTien(b, k) == 0)
		cout << "\nMang khong co gia tri dang 5^m";
	else
		cout << "\nGia tri co dang 5^m lon nhat trong mang la: " << TimGiaTri(b, k);
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
bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}
int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) != 0)
			return a[i];
	return 0;
}
int TimGiaTri(int a[], int n)
{
	int lc = DauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) && a[i] > lc)
			lc = a[i];
	return lc;
}