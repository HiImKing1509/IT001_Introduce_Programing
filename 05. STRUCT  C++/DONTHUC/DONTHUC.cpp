#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai134
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC Tich(DONTHUC, DONTHUC);
DONTHUC Thuong(DONTHUC, DONTHUC);
DONTHUC DaoHam1(DONTHUC);
DONTHUC DaoHamk(DONTHUC, int);
float TinhGiaTri(DONTHUC, float);
DONTHUC operator*(DONTHUC, DONTHUC);
DONTHUC operator/(DONTHUC, DONTHUC);


int main()
{
	cout << "1. Nhap don thuc:";
	DONTHUC M;
	Nhap(M);

	cout << endl << "2. Xuat don thuc:";
	Xuat(M);

	cout << endl << "\n3. Tich 2 don thuc:";
	DONTHUC M1, M2, M12;
	cout << "\nNhap don thuc 1:";
	Nhap(M1);
	cout << "Nhap don thuc 2:";
	Nhap(M2);
	M12 = Tich(M1,M2);
	cout << "Ket qua:";
	Xuat(M12);

	cout << endl << "\n4. Thuong 2 don thuc:";
	DONTHUC M3, M4, M34;
	cout << "\nNhap don thuc 1:";
	Nhap(M3);
	cout << "Nhap don thuc 2:";
	Nhap(M4);
	M34 = Thuong(M3, M4);
	cout << "Ket qua:";
	Xuat(M34);

	cout << endl << "\n5. Tinh dao ham cap 1 cua don thuc:";
	DONTHUC M5;
	cout << "\nNhap don thuc:";
	Nhap(M5);
	M5 = DaoHam1(M5);
	cout << "Ket qua:";
	Xuat(M5);

	cout << endl << "\n6. Tinh dao ham cap k cua don thuc:";
	DONTHUC M6;
	int k;
	cout << "\nNhap don thuc:";
	Nhap(M6);
	cout << "Nhap cap k: ";
	cin >> k;
	M6 = DaoHamk(M6, k);
	cout << "Ket qua:";
	Xuat(M6);

	cout << endl << "\n7. Tinh gia tri cua don thuc tai vi tri x = x0:";
	DONTHUC M7;
	int x;
	cout << "\nNhap don thuc:";
	Nhap(M7);
	cout << "Nhap x = ";
	cin >> x;
	cout << "Ket qua: " << TinhGiaTri(M7, x);

	return 1;
}

//Bai135
void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

//Bai136
void Xuat(DONTHUC f)
{
	cout << "\nDon thuc: " << f.a << "x^" << f.n;
}

//Bai137
DONTHUC Tich(DONTHUC x, DONTHUC y)
{
	DONTHUC z;
	z.a = x.a * y.a;
	z.n = x.n + y.n;
	return z;
}

//Bai138
DONTHUC Thuong(DONTHUC x, DONTHUC y)
{
	DONTHUC z;
	z.a = x.a / y.a;
	z.n = x.n - y.n;
	return z;
}

//Bai139
DONTHUC DaoHam1(DONTHUC x)
{
	x.a = x.a * x.n;
	x.n = x.n - 1;
	return x;
}

//Bai140
DONTHUC DaoHamk(DONTHUC x, int a)
{
	for (int i = 1; i <= a; i++)
		x = DaoHam1(x);
	return x;
}

//Bai141
float TinhGiaTri(DONTHUC f, float t)
{
	return f.a * pow(t, f.n);
}

//Bai142 
DONTHUC operator*(DONTHUC x, DONTHUC y)
{
	DONTHUC z;
	z.a = x.a * y.a;
	z.n = x.n + y.n;
	return z;
}

//Bai143 
DONTHUC operator/(DONTHUC x, DONTHUC y)
{
	DONTHUC z;
	z.a = x.a / y.a;
	z.n = x.n - y.n;
	return z;
}
