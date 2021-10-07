#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int);

int main()
{
	int b[100];
	int k;
	int vt = 1;
	Nhap(b, k);
	cout << "Mang ban dau: " << endl;
	Xuat(b, k);

	cout << "\n\nCac mang con: " << endl;
	LietKe(b, k, vt);

	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void LietKe(int a[], int n, int vt)
{
	if (vt == n)
		return;
	for (int i = 0; i <= n - vt; i++)
	{
		for (int j = i; j < i + vt; j++)
			cout << setw(6) << a[j];
		cout << "\n";
	}
	cout << "\n";
	LietKe(a, n, vt + 1);
}
