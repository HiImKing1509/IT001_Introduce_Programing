#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
void LietKe(int*, int, int, int);

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
	int g, h;
	cout << "\nNhap x: ";
	cin >> g;
	cout << "Nhap y: ";
	cin >> h;

	cout << "\nCac gia tri chan thuoc doan [" << g << "," << h << "] trong mang: ";
	LietKe(b, k, g, h);
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
void LietKe(int* a, int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && x <= a[i] && a[i] <= y)
			cout << a[i] << setw(6);
}