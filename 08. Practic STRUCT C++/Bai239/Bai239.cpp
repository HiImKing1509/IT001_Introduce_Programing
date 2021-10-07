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
int DemThuoc(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DIEM b[100][100];
	int k, l;

	NhapMaTran(b, k, l);
	cout << "--> Ma tran ban dau: " << endl;
	XuatMaTran(b, k, l);

	cout << "\n--> Dem so luong diem trong ma tran thuoc duong thang: ";
	DUONGTHANG d;
	NhapDuongThang(d);
	cout << "Duong thang d co phuong trinh: ";
	XuatDuongThang(d);
	cout << "\nKet qua: Co " << DemThuoc(b, k, l, d) << " diem thuoc duong thang d";

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
int DemThuoc(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]))
				dem++;
	return dem;
}

