#include<iostream>
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
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON M;
	Nhap(M);
	cout << "Toa do duong tron vua nhap: " << endl;
	Xuat(M);
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
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "Tam I: ";
	Xuat(c.I);
	cout << "\nBan kinh = " << c.R;
}