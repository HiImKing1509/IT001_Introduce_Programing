#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap he so duong thang thu nhat: ";
	Nhap(d1);
	cout << "Nhap he so duong thang thu hai: ";
	Nhap(d2);
	cout << "\nDuong thang thu nhat: ";
	Xuat(d1);
	cout << "\nDuong thang thu hai: ";
	Xuat(d2);

	return 1;
}
void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << setw(3);
	cout << setprecision(3);
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}