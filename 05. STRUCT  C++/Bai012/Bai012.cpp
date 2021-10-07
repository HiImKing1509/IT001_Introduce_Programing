#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC M;
	Nhap(M);
	cout << "\nTam giac vua nhap: ";
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
void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A: ";
	Nhap(t.A);
	cout << "Nhap diem B: ";
	Nhap(t.B);
	cout << "Nhap diem C: ";
	Nhap(t.C);
}
void Xuat(TAMGIAC t)
{
	cout << "\nToa do diem A: ";
	Xuat(t.A);
	cout << "\nToa do diem B: ";
	Xuat(t.B);
	cout << "\nToa do diem C: ";
	Xuat(t.C);
}