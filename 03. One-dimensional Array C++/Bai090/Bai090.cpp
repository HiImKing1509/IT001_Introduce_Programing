#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	if (HoanThienDau(b, k) == 0)
		cout << "\nMang khong co so hoan thien";
	else
		cout << "\nGia tri hoan thien dau tien trong mang la: " << HoanThienDau(b, k);
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
bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n && s != 0)
		return true;
	return false;
}
int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			return a[i];
	return 0;
}