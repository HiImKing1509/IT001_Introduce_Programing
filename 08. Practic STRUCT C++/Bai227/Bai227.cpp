#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void NhapDuongThang(DUONGTHANG&);
void NhapMang(DUONGTHANG[], int&);
void XuatDuongThang(DUONGTHANG);
void XuatMang(DUONGTHANG[], int);
void NhapDiem(DIEM&);
void XuatDiem(DIEM);
int ktDiQua(DUONGTHANG[], int, DIEM);

int main()
{
	DUONGTHANG b[100];
	int k;
	NhapMang(b, k);
	cout << "\n--> Mang ban dau: ";
	XuatMang(b, k);

	cout << "\n\n--> Kiem tra diem thuoc duong thang: ";
	DIEM A;
	NhapDiem(A);
	cout << "Toa do diem A: ";
	XuatDiem(A);
	if (ktDiQua(b, k, A) == 1)
		cout << "\n\nTon tai duong thang di qua diem A";
	else
		cout << "\n\nKhong ton tai duong thang di qua diem A";
	cout << endl;

	return 1;
}

void NhapDuongThang(DUONGTHANG& d)
{
	cout << "\nHe so a: ";
	cin >> d.a;
	cout << "He so b: ";
	cin >> d.b;
	cout << "He so c: ";
	cin >> d.c;
}
void NhapMang(DUONGTHANG a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nHe so duong thang d[" << i << "]";
		NhapDuongThang(a[i]);
	}
}
void XuatDuongThang(DUONGTHANG d)
{
	cout << fixed << setprecision(2) << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}
void XuatMang(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nd[" << i << "]: ";
		XuatDuongThang(a[i]);
	}
}
void NhapDiem(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
}
void XuatDiem(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
int ktDiQua(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i].a * P.x + a[i].b * P.y + a[i].c == 0)
			flag = 1;
	return flag;
}
