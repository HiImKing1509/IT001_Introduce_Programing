#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int DoiXungDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (DoiXungDau(b, k) == -1)
		cout << "\nMang khong co so doi xung";
	else
		cout << "\nGia tri doi xung dau tien trong mang la: " << DoiXungDau(b, k);
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
bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}
int DoiXungDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
			return a[i];
	return -1;
}