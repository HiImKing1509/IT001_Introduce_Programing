#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int TimGiaTri(int[], int);
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n)
{
	cout << "\nGia tri xuat hien nhieu nhat trong mang la: ";
	int lc = TimGiaTri(a, n);
	int ts = TanSuat(a, n, lc);
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(a, n, a[i]) == ts && flag)
			cout << a[i] << setw(4);
	}
}