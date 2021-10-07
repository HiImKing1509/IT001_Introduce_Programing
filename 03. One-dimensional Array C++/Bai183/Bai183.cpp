#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int[], int);

int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	cout << "Mang thu 1: ";
	Xuat(a, k);
	cout << endl;

	int b[100];
	int t;
	Nhap(b, t);
	cout << "Mang thu 2: ";
	Xuat(b, t);

	ktCon(a, k, b, t);
	if (ktCon(a, k, b, t) == 1)
		cout << "\n\nMang 1 la con cua mang 2";
	else
		cout << "\n\nMang 1 khong phai mang con cua mang 2";
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 + 1) - 0;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(4);
}
int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}