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

//Bai160
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
float KhoangCach2Diem(DIEM, DIEM);
bool ktTonTai(TAMGIAC);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);
DIEM TrongTam(TAMGIAC);
DIEM HoanhDoMax(TAMGIAC);
DIEM TungDoMin(TAMGIAC);
float TongKhoangCach(TAMGIAC, DIEM);
void DinhDangTamGiac(TAMGIAC);

int main()
{
	cout << "1. Nhap toa do tam giac:";
	TAMGIAC M;
	Nhap(M);

	cout << endl << "2. Xuat tam giac:";
	Xuat(M);

	cout << endl << "\n3. Kiem tra 3 diem co tao thanh tam giac hay khong:";
	TAMGIAC M1;
	cout << "\nNhap toa do:";
	Nhap(M1);
	if (ktTonTai(M1))
		cout << "3 diem da cho lap thanh tam giac";
	else
		cout << "3 diem da cho khong tao thanh tam giac";

	cout << endl << "\n4. Chu vi tam giac:";
	TAMGIAC M2;
	cout << "\nNhap toa do:";
	Nhap(M2);
	cout << "Ket qua: " << ChuVi(M2);

	cout << endl << "\n5. Dien tich tam giac:";
	TAMGIAC M3;
	cout << "\nNhap toa do:";
	Nhap(M3);
	cout << "Ket qua: " << DienTich(M3);

	cout << endl << "\n6. Toa do trong tam cua tam giac:";
	TAMGIAC M4;
	DIEM D;
	cout << "\nNhap toa do:";
	Nhap(M4);
	D = TrongTam(M4);
	cout << "Trong tam: ";
	Xuat(D);

	cout << endl << "\n7. Diem co hoanh do lon nhat trong tam giac:";
	TAMGIAC M5;
	DIEM E;
	cout << "\nNhap toa do:";
	Nhap(M5);
	E = HoanhDoMax(M5);
	cout << "Diem: ";
	Xuat(E);

	cout << endl << "\n8. Diem co tung do nho nhat trong tam giac:";
	TAMGIAC M6;
	DIEM F;
	cout << "\nNhap toa do:";
	Nhap(M6);
	F = TungDoMin(M6);
	cout << "Diem: ";
	Xuat(F);

	cout << endl << "\n9. Tong khoang cach tu diem P den 3 dinh tam giac";
	TAMGIAC M7;
	DIEM H;
	cout << "\nNhap toa do:";
	Nhap(M7);
	cout << "Nhap diem P:";
	Nhap(H);
	cout << "Ket qua: " << TongKhoangCach(M7, H);

	cout << endl << "\n10. Dinh dang tam giac:";
	TAMGIAC M8;
	cout << "\nNhap toa do:";
	Nhap(M8);
	DinhDangTamGiac(M8);

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

//Bai161
void Nhap(TAMGIAC& t)
{
	cout << "\nNhap diem A: ";
	Nhap(t.A);
	cout << "Nhap diem B: ";
	Nhap(t.B);
	cout << "Nhap diem C: ";
	Nhap(t.C);
}

//Bai162
void Xuat(TAMGIAC t)
{
	cout << "\nA: ";
	Xuat(t.A);
	cout << "\nB: ";
	Xuat(t.B);
	cout << "\nC: ";
	Xuat(t.C);
}

//Bai163
float KhoangCach2Diem(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}
bool ktTonTai(TAMGIAC t)
{
	float x = KhoangCach2Diem(t.A, t.B);
	float y = KhoangCach2Diem(t.A, t.C);
	float z = KhoangCach2Diem(t.B, t.C);
	if (x + y > z && x + z > y && y + z > x)
		return true;
	return false;
}

//Bai164
float ChuVi(TAMGIAC t)
{
	float x = KhoangCach2Diem(t.A, t.B);
	float y = KhoangCach2Diem(t.A, t.C);
	float z = KhoangCach2Diem(t.B, t.C);
	return (x + y + z);
}

//Bai165
float DienTich(TAMGIAC t)
{
	float x = KhoangCach2Diem(t.A, t.B);
	float y = KhoangCach2Diem(t.A, t.C);
	float z = KhoangCach2Diem(t.B, t.C);
	float p = (x + y + z) / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}

//Bai166
DIEM TrongTam(TAMGIAC t)
{
	DIEM G;
	G.x = (t.A.x + t.B.x + t.C.x) / 3;
	G.y = (t.A.y + t.B.y + t.B.y) / 3;
	return G;
}

//Bai167
DIEM HoanhDoMax(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}

//Bai168
DIEM TungDoMin(TAMGIAC t)
{
	DIEM lc = t.A;
	if (lc.y > t.B.y)
		lc = t.B;
	if (lc.y > t.C.y)
		lc = t.C;
	return lc;
}

//Bai169
float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float x = KhoangCach2Diem(t.A, P);
	float y = KhoangCach2Diem(t.B, P);
	float z = KhoangCach2Diem(t.C, P);
	return (x + y + z);
}

//Bai170
void DinhDangTamGiac(TAMGIAC t)
{
	float a = KhoangCach2Diem(t.A, t.B);
	float b = KhoangCach2Diem(t.A, t.C);
	float c = KhoangCach2Diem(t.B, t.C);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
		{
			cout << "Tam giac deu";
		}
		else
			if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac can";
			}
			else
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
					cout << "Tam giac vuong";
				else
					cout << "Tam giac thuong";
			}
	}
	else
		cout << "Khong la tam giac";
}



