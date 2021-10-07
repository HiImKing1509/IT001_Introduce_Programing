#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
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
void LietKe(int a[], int n)
{
	cout << "\nCac gia tri chan co it nhat mot lan can cung la gia tri chan: ";
	if (n <= 1)
		return;

	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0] << " " << setw(6);

	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << a[i] << " " << setw(6);

	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << a[n - 1] << " " << setw(6);
}