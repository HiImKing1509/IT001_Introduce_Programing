#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Bai117
struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC&, int);

int main()
{
	cout << "1. Nhap so phuc:";
	SOPHUC M;
	Nhap(M);

	cout << endl << "2. Xuat so phuc:";
	Xuat(M);

	cout << endl << "\n3. Tong hai so phuc:";
	SOPHUC M1, M2, M12;
	cout << "\nSo phuc thu nhat:";
	Nhap(M1);
	cout << "So phuc thu hai:";
	Nhap(M2);
	M12 = Tong(M1, M2);
	cout << "Tong:";
	Xuat(M12);

	cout << endl << "\n4. Hieu hai so phuc:";
	SOPHUC M3, M4, M34;
	cout << "\nSo phuc thu nhat:";
	Nhap(M3);
	cout << "So phuc thu hai:";
	Nhap(M4);
	M34 = Hieu(M3, M4);
	cout << "Hieu:";
	Xuat(M34);

	cout << endl << "\n5. Tich hai so phuc:";
	SOPHUC M5, M6, M56;
	cout << "\nSo phuc thu nhat:";
	Nhap(M5);
	cout << "So phuc thu hai:";
	Nhap(M6);
	M56 = Tich(M5, M6);
	cout << "Tich:";
	Xuat(M56);

	cout << endl << "\n6. Thuong hai so phuc:";
	SOPHUC M7, M8, M78;
	cout << "\nSo phuc thu nhat:";
	Nhap(M7);
	cout << "So phuc thu hai:";
	Nhap(M8);
	M78 = Thuong(M7, M8);
	cout << "Thuong:";
	Xuat(M78);

	cout << endl << "\n7. Luy thua cua so phuc:";
	SOPHUC M9, M10;
	int k;
	cout << "\nSo phuc ban dau:";
	Nhap(M7);
	cout << "Nhap so mu: ";
	cin >> k;
	M10 = LuyThua(M9, k);
	cout << "Luy thua: ";
	Xuat(M10);

	return 1;
}

//Bai118
void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

//Bai119
void Xuat(SOPHUC x)
{
	cout << "\nSo thuc = " << x.Thuc << endl;
	cout << "So ao = " << x.Ao;
}

//Bai120
SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC z;
	z.Thuc = x.Thuc + y.Thuc;
	z.Ao = x.Ao + y.Ao;
	return z;
}

//Bai121
SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC z;
	z.Thuc = x.Thuc - y.Thuc;
	z.Ao = x.Ao - y.Ao;
	return z;
}

//Bai122
SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC z;
	z.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	z.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return z;
}

//Bai123
SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	SOPHUC z;
	float mau = y.Thuc * y.Thuc + y.Ao * y.Ao;
	z.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mau;
	z.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mau;
	return z;
}

//Bai124
SOPHUC LuyThua(SOPHUC& x, int n)
{
	SOPHUC z = { 1,0 };
	for (int i = 0; i <= n; i++)
		z = Tich(z, x);
	return z;
}