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

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void NhapDiem(DIEM&);
void XuatDiem(DIEM);
void NhapDuongTron(DUONGTRON&);
void XuatDuongTron(DUONGTRON);
void NhapMaTran(DIEM[][100], int&, int&);
void XuatMaTran(DIEM[][100], int, int);
float KhoangCach(DIEM, DIEM);
int DiemThuocDuongTron(DIEM[][100], int, int, DUONGTRON);

int main()
{
	DIEM b[100][100];
	int k, l;

	NhapMaTran(b, k, l);
	cout << "--> Ma tran ban dau: " << endl;
	XuatMaTran(b, k, l);

	cout << "\n--> Dem so luong diem thuoc duong tron: ";
	DUONGTRON c1;
	cout << "\nNhap duong tron: ";
	NhapDuongTron(c1);
	cout << "Toa do duong tron: ";
	XuatDuongTron(c1);
	cout << "\nKet qua: Co " << DiemThuocDuongTron(b, k, l, c1) << " diem thuoc duong tron";

	return 1;
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
	cout << setw(5) << "(" << P.x << "," << P.y << ")";
}
void NhapDuongTron(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	NhapDiem(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void XuatDuongTron(DUONGTRON c)
{
	XuatDiem(c.I);
	cout << " , R = " << c.R;
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
			cout << endl;
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
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int DiemThuocDuongTron(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KhoangCach(a[i][j], c.I) < c.R)
				dem++;
	return dem;
}
