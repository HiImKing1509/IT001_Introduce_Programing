#include<iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

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

int main()
{
	HINHCAU M;
	Nhap(M);
	cout << "Toa do hinh cau vua nhap: " << endl;
	Xuat(M);
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
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(HINHCAU c)
{
	cout << "Tam I: ";
	Xuat(c.I);
	cout << "\nBan kinh = " << c.R;
}