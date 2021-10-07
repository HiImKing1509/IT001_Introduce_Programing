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
bool ktCatNhau(DUONGTHANG, DUONGTHANG);
DIEM GiaoNhau(DUONGTHANG, DUONGTHANG);
bool ktThuoc(DUONGTHANG, DIEM);
int ktDongQui(DUONGTHANG[], int);

int main()
{
	DUONGTHANG b[100];
	int k;
	NhapMang(b, k);
	cout << "\n--> Mang ban dau: ";
	XuatMang(b, k);

	cout << "\n\n--> Kiem tra 3 duong thang dong qui: ";
	if (ktDongQui(b, k) == 1)
		cout << "Ton tai bo 3 duong thang dong qui";
	else
		cout << "Khong ton tai bo 3 duong thang dong qui";
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
bool ktCatNhau(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return true;
	return false;
}
DIEM GiaoNhau(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
bool ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return true;
	return false;
}
int ktDongQui(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ktCatNhau(a[i], a[j]))
			{
				DIEM Q = GiaoNhau(a[i], a[j]);
				for (int k = 0; k < n; k++)
				{
					if (k != i && k != j && ktThuoc(a[k], Q))
						return 1;
				}
			}
		}
	}
	return 0;
}
