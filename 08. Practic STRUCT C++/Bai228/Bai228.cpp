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
float kcDiemDuong(DUONGTHANG, DIEM);
DUONGTHANG GanPNhat(DUONGTHANG[], int, DIEM);


int main()
{
	DUONGTHANG b[100];
	int k;
	NhapMang(b, k);
	cout << "\n--> Mang ban dau: ";
	XuatMang(b, k);

	cout << "\n\n--> Tim duong thang gan P nhat: ";
	DIEM A1;
	NhapDiem(A1);
	cout << "Toa do diem P: ";
	XuatDiem(A1);
	DUONGTHANG d1 = GanPNhat(b, k, A1);
	cout << "\nKet qua: ";
	XuatDuongThang(d1);


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
float kcDiemDuong(DUONGTHANG d, DIEM P)
{
	float tu = d.a * P.x + d.b * P.y + d.c;
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
DUONGTHANG GanPNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (kcDiemDuong(a[i], P) < kcDiemDuong(lc, P))
			lc = a[i];
	}
	return lc;
}