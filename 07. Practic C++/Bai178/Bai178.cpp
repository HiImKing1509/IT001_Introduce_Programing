#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Lietke(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	Lietke(b, k);
	cout << "\nMang sau khi dua cac so chia het cho 3 len dau la: ";
	Xuat(b, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "nhap n = ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0;i < n;i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(6) << a[i];
}
void Lietke(int a[], int n)
{
	for()
}