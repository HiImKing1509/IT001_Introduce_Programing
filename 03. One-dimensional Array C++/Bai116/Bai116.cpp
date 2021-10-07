#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void GanNhat(int[], int, int&, int&);
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
void GanNhat(int a[], int n, int& x, int& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}
void LietKe(int a[], int n)
{
	cout << "\nCac cap gia tri gan nhau nhat trong mang: ";
	int x, y;
	GanNhat(a, n, x, y);
	for (int i = 0; i <= n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (i != j && abs(a[i] - a[j]) == abs(x - y))
				cout << "\n(" << a[i] << ", " << a[j] << ")";
}