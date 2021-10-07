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
SOPHUC DauTien(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;

	Nhap(b, k);
	cout << "\n--> Mang ban dau: " << endl;
	Xuat(b, k);

	cout << "\n--> So phuc co phan thuc va phan ao duong dau tien: ";
	SOPHUC x2 = DauTien(b, k);
	Xuat(x2);
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
SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].Thuc > 0 && a[i].Ao > 0)
			return a[i];
	}
	SOPHUC lc = { 0,0 };
	return lc;
}