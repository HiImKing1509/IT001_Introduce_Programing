#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int KtDoixung(int);
int DoiXungdautien(int[], int);
int main()
{
	int* a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	cout << "Mang ban dau la: ";
	Xuat(a, n);
	int kq = DoiXungdautien(a, n);
	if (kq != 10)
		cout << "\nGia tri doi xung dau tien cua mang la: " << kq;
	else
		cout << "\n" << 10;
	return 1;
}
void Nhap(int a[], int n)
{

	srand(std::time(nullptr));
	if (n >= 0)
	{
		Nhap(a, n - 1);
		a[n - 1] = rand() % (200 + 1) - 100;
	}

}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}
int KtDoixung(int n)
{
	if (n <= 9 && n >= -9)
		return 1;
	int t = abs(n);
	int s = 0;
	while (t != 0)
	{
		int d = t % 10;
		s = s * 10 + d;
		t = t / 10;
	}
	if (s == abs(n))
		return 1;
	return 0;
}
int DoiXungdautien(int a[], int n)
{
	if (n == 0)
		return 10;
	int lc = DoiXungdautien(a, n - 1);
	if (lc != 10)
		return lc;
	if (KtDoixung(a[n - 1]) == 1)
	{
		lc = a[n - 1];
		return lc;
	}

	return 10;
}
