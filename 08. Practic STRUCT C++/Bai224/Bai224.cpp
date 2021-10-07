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
int ktSongSong(DUONGTHANG, DUONGTHANG);
int MangSongSong(DUONGTHANG[], int);


int main()
{
	DUONGTHANG b[100];
	int k;
	NhapMang(b, k);
	cout << "\n--> Mang ban dau: ";
	XuatMang(b, k);

	cout << "\n\n--> Kiem tra song song: ";
	if (MangSongSong(b, k) == 1)
		cout << "Cac duong thang song song nhau";
	else
		cout << "Cac duong thang khong song song voi nhau";
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
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	if (d1.a == d2.a && d1.b == d2.b && d1.c != d2.c)
		return 1;
	return 0;
}
int MangSongSong(DUONGTHANG a[], int n)
{
	int flag = 1;
	for (int i = 1; i < n; i++)
		if (ktSongSong(a[0], a[i]) == 0)
			flag = 0;
	return flag;
}