#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);
SOPHUC Tong(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;

	Nhap(b, k);
	cout << "\n--> Mang ban dau: " << endl;
	Xuat(b, k);

	cout << "\n--> Tong cac so phuc trong mang: ";
	SOPHUC x1 = Tong(b, k);
	Xuat(x1);
	cout << endl;

	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "\nPhan thuc: ";
	cin >> x.Thuc;
	cout << "Phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << fixed << setprecision(2) << x.Thuc << " + " << x.Ao << "i";
}
void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "So phuc a[" << i << "]: ";
		Nhap(a[i]);
		cout << endl;
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "] = ";
		Xuat(a[i]);
		cout << endl;
	}
}
SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC lc = { 0,0 };
	for (int i = 0; i < n; i++)
	{
		lc.Thuc = a[i].Thuc + lc.Thuc;
		lc.Ao = a[i].Ao + lc.Ao;
	}
	return lc;
}
