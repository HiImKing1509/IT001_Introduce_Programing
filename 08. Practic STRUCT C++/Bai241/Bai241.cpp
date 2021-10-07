#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void NhapDiem(DIEM&);
void XuatDiem(DIEM);
void NhapDuongThang(DUONGTHANG&);
void XuatDuongThang(DUONGTHANG);
void NhapMaTran(DIEM[][100], int&, int&);
void XuatMaTran(DIEM[][100], int, int);
int ktThuoc(DUONGTHANG, DIEM);
float KhoangCach(DUONGTHANG, DIEM);
DIEM DiemGanNhat(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DIEM b[100][100];
	int k, l;

	NhapMaTran(b, k, l);
	cout << "--> Ma tran ban dau: " << endl;
	XuatMaTran(b, k, l);

	cout << "\n--> Tim diem gan duong thang nhat: ";
	DUONGTHANG d;
	NhapDuongThang(d);
	cout << "Phuong trinh duong thang d: ";
	XuatDuongThang(d);
	DIEM A = DiemGanNhat(b, k, l, d);
	cout << "\nKet qua: ";
	XuatDiem(A);

	return 1;
}
void NhapDiem(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << endl;
}
void XuatDiem(DIEM P)
{
	cout << setw(5) << "(" << P.x << "," << P.y << ")";
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
void XuatDuongThang(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
	cout << endl;
}
void NhapMaTran(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Toa do a[" << i << "][" << j << "]: ";
			NhapDiem(a[i][j]);
		}
}
void XuatMaTran(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			XuatDiem(a[i][j]);
		}
		cout << endl;
	}
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}
float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = (float)abs(d.a * P.x + d.b * P.y + d.c);
	float mau = (float)sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
DIEM DiemGanNhat(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	DIEM lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]) == 0)
				if (KhoangCach(d, a[i][j]) < KhoangCach(d, lc))
					lc = a[i][j];
	return lc;
}