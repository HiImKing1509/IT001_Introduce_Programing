#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

//Bai153
struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float Sxq(HINHCAU);
float TheTich(HINHCAU);
float KhoangCach2Diem(DIEMKHONGGIAN, DIEMKHONGGIAN);
bool ktThuoc(HINHCAU, DIEMKHONGGIAN);
int TuongDoi(HINHCAU, HINHCAU);

int main()
{
	cout << "1. Nhap toa do hinh cau:";
	HINHCAU M;
	Nhap(M);

	cout << endl << "2. Xuat hinh cau:";
	Xuat(M);

	cout << endl << "\n3. Dien tich xung quanh hinh cau:";
	HINHCAU M1;
	cout << "\nNhap toa do hinh cau:";
	Nhap(M1);
	cout << "Ket qua: " << Sxq(M1);

	cout << endl << "\n4. The tich hinh cau:";
	HINHCAU M2;
	cout << "\nNhap toa do hinh cau:";
	Nhap(M2);
	cout << "Ket qua: " << TheTich(M2);

	cout << endl << "\n5. Kiem tra diem khong gian co thuoc hinh cau hay khong:";
	HINHCAU M3;
	DIEMKHONGGIAN A;
	cout << "\nHinh cau ban dau:";
	Nhap(M3);
	cout << "Nhap toa do diem A:";
	Nhap(A);
	if (ktThuoc(M3, A))
		cout << "Diem A thuoc hinh cau";
	else
		cout << "Diem A khong thuoc hinh cau";

	cout << endl << "\n6. Kiem tra vi tri tuong doi giua 2 hinh cau:";
	HINHCAU M5, M6;
	cout << "\nHinh cau thu nhat:";
	Nhap(M5);
	cout << "Hinh cau thu hai:";
	Nhap(M6);
	int t = TuongDoi(M5, M6);
	if (t == 0)
		cout << "Hai hinh cau trung nhau";
	else if (t == 1)
		cout << "Hai hinh cau roi nhau";
	else if (t == 2)
		cout << "Hai hinh cau tiep xuc ngoai";
	else if (t == 3)
		cout << "Hai hinh cau cat nhau";
	else if (t == 4)
		cout << "Hai hinh cau tiep xuc trong";
	else if (t == 5)
		cout << "Hai hinh cau chua trong nhau";

	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "x = " << P.x << ", ";
	cout << "y = " << P.y << ", ";
	cout << "z = " << P.z;
}

//Bai154
void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

//Bai155
void Xuat(HINHCAU c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh = " << c.R;
}

//Bai156
float Sxq(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}

//Bai157
float TheTich(HINHCAU c)
{
	return float((4 * 3.14 * c.R * c.R * c.R) / 3);
}

//Bai158
float KhoangCach2Diem(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}
bool ktThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	float kc = KhoangCach2Diem(c.I, P);
	if (kc <= c.R)
		return true;
	return false;
}

//Bai159
int TuongDoi(HINHCAU c, HINHCAU s)
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
