#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
int ToanLeDauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	TimGiaTri(b, k);
	if (ToanLeDauTien(b, k) == -1)
		cout << "\nMang khong co so toan le";
	else
		cout << "\nGia tri co toan chu so le lon nhat trong mang la: " << TimGiaTri(b, k);
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
bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t % 2 == 0)
			return false;
		t = t / 10;
	}
	return true;
}
int ToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) != 0)
			return a[i];
	return 0;
}
int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}