#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktNguyenTo(int);
void LietKe(int*, int);

int main()
{
	int* b;
	int k;
	cout << "Nhap n: ";
	cin >> k;

	b = new int[k];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
	delete[]b;
	return 1;
}
void Nhap(int* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(6);
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}
void LietKe(int* a, int n)
{
	cout << "\nCac vi tri gia tri nguyen to trong mang: ";
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			cout << i << setw(5);
}