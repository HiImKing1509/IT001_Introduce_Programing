#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai077
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

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
float KhoangCach(DUONGTHANG, DIEM);
bool ktThuoc(DUONGTHANG, DIEM);
bool ktTrung(DUONGTHANG, DUONGTHANG);
bool ktSongSong(DUONGTHANG, DUONGTHANG);
bool ktCat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
bool ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	cout << endl << "1. Nhap he so duong thang trong (Oxy):";
	DUONGTHANG d1;
	cout << "\nNhap he so duong thang: ";
	Nhap(d1);

	cout << endl << "2. Xuat duong thang trong (Oxy):";
	cout << "\nDuong thang: ";
	Xuat(d1);

	cout << endl << "\n3. Khoang cach giua 1 diem va 1 duong thang trong (Oxy):";
	DUONGTHANG d2;
	DIEM A;
	cout << "\nNhap toa do diem: ";
	Nhap(A);
	cout << "Nhap he so duong thang: ";
	Nhap(d2);
	float kc = KhoangCach(d2, A);
	cout << setw(6) << setprecision(4);
	cout << "KhoangCach: " << kc;

	cout << endl << "\n4. Kiem tra 1 diem co thuoc 1 duong thang hay khong:";
	DUONGTHANG d3;
	DIEM B;
	cout << "\nNhap toa do diem: ";
	Nhap(B);
	cout << "Nhap he so duong thang: ";
	Nhap(d3);
	if (ktThuoc(d3, B))
		cout << "Diem thuoc duong thang";
	else
		cout << "Diem khong thuoc duong thang";
	
	cout << endl << "\n5. Kiem tra hai duong thang co trung nhau hay khong:";
	DUONGTHANG d4, d5;
	cout << "\nNhap he so duong thang thu nhat: ";
	Nhap(d4);
	cout << "Nhap he so duong thang thu hai: ";
	Nhap(d5);
	if (ktTrung(d4, d5))
		cout << "Hai duong thang da cho trung nhau";
	else
		cout << "Hai duong thang da cho khong trung nhau";

	cout << endl << "\n6. Kiem tra hai duong thang co song song hay khong:";
	DUONGTHANG d6, d7;
	cout << "\nNhap he so duong thang thu nhat: ";
	Nhap(d6);
	cout << "Nhap he so duong thang thu hai: ";
	Nhap(d7);
	if (ktSongSong(d6, d7))
		cout << "Hai duong thang da cho song song voi nhau";
	else
		cout << "Hai duong thang da cho khong song song voi nhau";

	cout << endl << "\n7. Kiem tra hai duong thang co cat nhau hay khong:";
	DUONGTHANG d8, d9;
	cout << "\nNhap he so duong thang thu nhat: ";
	Nhap(d8);
	cout << "Nhap he so duong thang thu hai: ";
	Nhap(d9);
	if (ktCat(d8, d9))
	{
		cout << "Hai duong thang da cho cat nhau";
		DIEM C;
		C = GiaoDiem(d8, d9);
		cout << endl << "\n8. Toa do giao diem cua hai duong thang da cho:";
		Xuat(C);
	}
	else
		cout << "Hai duong thang da cho khong cat nhau";

	cout << endl << "\n9. Kiem tra hai duong thang co vuong goc nhau hay khong:";
	DUONGTHANG d10, d11;
	cout << "\nNhap he so duong thang thu nhat: ";
	Nhap(d10);
	cout << "Nhap he so duong thang thu hai: ";
	Nhap(d11);
	if (ktVuongGoc(d10, d11))
		cout << "Hai duong thang da cho vuong goc voi nhau";
	else
		cout << "Hai duong thang da cho khong vuong goc voi nhau";

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
	cout << setw(2);
	cout << setprecision(4);
	cout << "(" << P.x << "," << P.y << ")";
}

//Bai078
void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

//Bai079
void Xuat(DUONGTHANG d)
{
	cout << setw(3);
	cout << setprecision(3);
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}

//Bai080
float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

//Bai081
bool ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return true;
	return false;
}

//Bai082
bool ktTrung(DUONGTHANG dt1, DUONGTHANG dt2)
{
	float D1 = dt1.a * dt2.b - dt2.a * dt1.b;
	float D2 = -dt1.c * dt2.b + dt2.c * dt1.b;
	if (D1 == 0 && D2 == 0)
		return true;
	return false;
}

//Bai083
bool ktSongSong(DUONGTHANG dt1, DUONGTHANG dt2)
{
	float D1 = dt1.a * dt2.b - dt2.a * dt1.b;
	float D2 = -dt1.c * dt2.b + dt2.c * dt1.b;
	if (D1 == 0 && D2 != 0)
		return true;
	return false;
}

//Bai084
bool ktCat(DUONGTHANG dt1, DUONGTHANG dt2)
{
	float D = dt1.a * dt2.b - dt2.a * dt1.b;
	if (D != 0)
		return true;
	return false;
}

//Bai085
DIEM GiaoDiem(DUONGTHANG dt1, DUONGTHANG dt2)
{
	float D1 = dt1.a * dt2.b - dt2.a * dt1.b;
	float D2 = -dt1.c * dt2.b + dt2.c * dt1.b;
	float D3 = -dt1.a * dt2.c + dt2.a * dt1.c;

	DIEM temp;
	temp.x = D2 / D1;
	temp.y = D3 / D1;
	return temp;
}

//Bai086
bool ktVuongGoc(DUONGTHANG dt1, DUONGTHANG dt2)
{
	if ((dt1.a * dt2.a + dt1.b * dt2.b) == 0)
		return true;
	return false;
}