#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void TimVTx(int[], int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau (tang dan): ";
	Xuat(b, k);
	
	int y;
	cout << "\nNhap x: ";
	cin >> y;

	cout << "Vi tri cua " << y << " trong mang: ";
	TimVTx(b, k, y);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
		cout << a[i] << setw(5);
	}
}
void TimVTx(int a[], int n, int x)
{
	if (n == 0)
		return;
	TimVTx(a, n - 1, x);
	if (a[n - 1] == x)
		cout << n - 1 << setw(5);
}
