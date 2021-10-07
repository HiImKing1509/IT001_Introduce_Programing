#include<iostream>
#include<iomanip>
#include<cmath>
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

//Bai144
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);
float KhoangCach2Diem(DIEM, DIEM);
bool ktThuoc1(DUONGTRON, DIEM);
int ktThuoc2(DUONGTRON, DIEM);
float KhoangCachDuongDiem(DUONGTHANG, DIEM);
int ktThuoc3(DUONGTRON, DUONGTHANG);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	cout << "1. Nhap duong tron:";
	DUONGTRON M;
	Nhap(M);

	cout << endl << "2. Xuat duong tron:";
	Xuat(M);

	cout << endl << "\n3. Tinh chu vi duong tron:";
	DUONGTRON M1;
	cout << "\nDuong tron ban dau:";
	Nhap(M1);
	cout << "Ket qua: " << ChuVi(M1);

	cout << endl << "\n4. Tinh dien tich duong tron:";
	DUONGTRON M2;
	cout << "\nDuong tron ban dau:";
	Nhap(M2);
	cout << "Ket qua: " << DienTich(M2);

	cout << endl << "\n5. Kiem tra diem thuoc duong tron:";
	DUONGTRON M3;
	DIEM A;
	cout << "\nDuong tron ban dau:";
	Nhap(M3);
	cout << "Nhap toa do diem A:";
	Nhap(A);
	if (ktThuoc1(M3, A))
		cout << "Diem A thuoc duong tron";
	else
		cout << "Diem A khong thuoc duong tron";

	cout << endl << "\n5. Kiem tra vi tri tuong doi giua 1 diem va 1 duong tron:";
	DUONGTRON M4;
	DIEM B;
	cout << "\nDuong tron ban dau:";
	Nhap(M4);
	cout << "Nhap toa do diem B:";
	Nhap(B);
	if (ktThuoc2(M4, B) == 1)
		cout << "Diem B thuoc duong tron";
	else if (ktThuoc2(M4, B) == 2)
		cout << "Diem B nam tren duong tron";
	else if (ktThuoc2(M4, B) == 0)
		cout << "Diem B nam ngoai duong tron";

	cout << endl << "\n6. Kiem tra vi tri tuong doi giua 1 duong thang va 1 duong tron:";
	DUONGTRON M7;
	DUONGTHANG d;
	cout << "\nDuong tron ban dau:";
	Nhap(M7);
	cout << "Nhap duong thang d:";
	Nhap(d);
	if (ktThuoc3(M7, d) == 1)
		cout << "Duong thang cat duong tron tai 2 diem";
	else if (ktThuoc3(M4, d) == 2)
		cout << "Duong thang tiep xuc duong tron";
	else if (ktThuoc3(M4, d) == 0)
		cout << "Duong thang khong cat duong tron";

	cout << endl << "\n7. Kiem tra vi tri tuong doi giua 2 duong tron:";
	DUONGTRON M5, M6;
	cout << "\nDuong tron thu nhat:";
	Nhap(M5);
	cout << "Duong tron thu hai:";
	Nhap(M6);
	int t = TuongDoi(M5, M6);
	if (t == 0)
		cout << "Hai duong tron trung nhau";
	else if (t == 1)
		cout << "Hai duong tron roi nhau";
	else if (t == 2)
		cout << "Hai duong tron tiep xuc ngoai";
	else if (t == 3)
		cout << "Hai duong tron cat nhau";
	else if (t == 4)
		cout << "Hai duong tron tiep xuc trong";
	else if (t == 5)
		cout << "Hai duong tron chua trong nhau";

	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "x = " << P.x << ", ";
	cout << "y = " << P.y;
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

//Bai145
void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

//Bai146
void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh = " << c.R;
}

//Bai147
float ChuVi(DUONGTRON c)
{
	return float(2 * 3.14 * c.R);
}

//Bai148
float DienTich(DUONGTRON c)
{
	return float(3.14 * c.R * c.R);
}

//Bai149
float KhoangCach2Diem(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}
bool ktThuoc1(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach2Diem(c.I, P);
	if (kc <= c.R)
		return true;
	return false;
}

//Bai150
int ktThuoc2(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach2Diem(c.I, P);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 1;
	return 2;
}

//Bai151
float KhoangCachDuongDiem(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
int ktThuoc3(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCachDuongDiem(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 1;
	return 2;
}

//Bai152
int TuongDoi(DUONGTRON c, DUONGTRON s)
{
	float kc = KhoangCach2Diem(c.I, s.I);
	if (kc == 0 && c.R == s.R)
		return 0;
	if (kc > (c.R + s.R))
		return 1;
	if (kc == (c.R + s.R))
		return 2;
	if (kc < (c.R + s.R) && kc > abs(c.R - s.R))
		return 3;
	if (kc == abs(c.R - s.R))
		return 4;
	return 5;
}

