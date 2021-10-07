#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai064
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachOx(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachOy(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachOz(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachO(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungO(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN);
bool ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	cout << endl << "1. Nhap toa do diem trong khong gian Oxyz:";
	DIEMKHONGGIAN A;
	cout << "\nNhap toa do diem A: ";
	Nhap(A);

	cout << endl << "2. Xuat toa do diem trong khong gian Oxyz:";
	cout << "\nToa do diem A: ";
	Xuat(A);

	cout << endl << "\n3. Khoang cach giua 2 diem trong khong gian:";
	DIEMKHONGGIAN B, C;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(B);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(C);
	float kc = KhoangCach(B, C);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Khoang cach: " << kc;

	cout << endl << "\n4. Khoang cach giua 2 diem trong khong gian theo phuong x:";
	DIEMKHONGGIAN B1, C1;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(B1);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(C1);
	float kcX = KhoangCachOx(B1, C1);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Khoang cach: " << kcX;

	cout << endl << "\n5. Khoang cach giua 2 diem trong khong gian theo phuong y:";
	DIEMKHONGGIAN B2, C2;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(B2);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(C2);
	float kcY = KhoangCachOy(B2, C2);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Khoang cach: " << kcY;

	cout << endl << "\n6. Khoang cach giua 2 diem trong khong gian theo phuong z:";
	DIEMKHONGGIAN B3, C3;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(B3);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(C3);
	float kcZ = KhoangCachOz(B3, C3);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Khoang cach: " << kcZ;

	cout << endl << "\n7. Khoang cach tu 1 diem den goc toa do:";
	DIEMKHONGGIAN B4;
	cout << "\nNhap toa do diem: ";
	Nhap(B4);
	float kcO = KhoangCachO(B4);
	cout << setw(2);
	cout << setprecision(3);
	cout << "5. Khoang cach: " << kcO;

	cout << endl << "\n8. Diem doi xung qua goc toc do:";
	DIEMKHONGGIAN C4;
	cout << "\nNhap toa do diem: ";
	Nhap(C4);
	C4 = DoiXungO(C4);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Diem: ";
	Xuat(C4);

	cout << endl << "\n9. Diem doi xung qua (Oxy):";
	DIEMKHONGGIAN B5;
	cout << "\nNhap toa do diem: ";
	Nhap(B5);
	B5 = DoiXungOxy(B5);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Diem: ";
	Xuat(B5);

	cout << endl << "\n10. Diem doi xung qua (Oxz):";
	DIEMKHONGGIAN C5;
	cout << "\nNhap toa do diem: ";
	Nhap(C5);
	C5 = DoiXungOxz(C5);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Diem: ";
	Xuat(C5);

	cout << endl << "\n11. Diem doi xung qua (Oyz):";
	DIEMKHONGGIAN B6;
	cout << "\nNhap toa do diem: ";
	Nhap(B6);
	B6 = DoiXungOyz(B6);
	cout << setw(2);
	cout << setprecision(3);
	cout << "Diem: ";
	Xuat(B6);

	cout << endl << "\n12. Kiem tra 2 diem co trung nhau hay khong:";
	DIEMKHONGGIAN B7, C7;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(B7);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(C7);
	if (ktTrung(B7, C7))
		cout << "Hai diem da cho trung nhau";
	else
		cout << "Hai diem da cho khong trung nhau";

	return 1;
}

//Bai065
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

//Bai066
void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(2);
	cout << setprecision(3);
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}

//Bai067
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y) + (P.z - Q.z) * (P.z - Q.z));
}

//Bai068
float KhoangCachOx(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}

//Bai069
float KhoangCachOy(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}

//Bai070
float KhoangCachOz(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}

//Bai071
float KhoangCachO(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}

//Bai072
DIEMKHONGGIAN DoiXungO(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}

//Bai073
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}

//Bai074
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}

//Bai075
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}

//Bai076
bool ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y & P.z == Q.z)
		return true;
	return false;
}