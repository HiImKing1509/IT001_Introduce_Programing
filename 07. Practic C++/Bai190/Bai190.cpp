#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
void Xuat(int[], int);
int Demphanbiet(int[], int);
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
	int kq = Demphanbiet(a, n);
	cout << "\nso gia tri phan biet la: " << kq;
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
int Demphanbiet(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int d = Demphanbiet(a, n - 1);
	int flag = 1;
	for (int i = 0;i <= n - 2;i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		d++;
	return d;
}