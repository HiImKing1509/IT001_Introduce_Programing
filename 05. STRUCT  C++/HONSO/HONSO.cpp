#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai106
struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
HONSO RutGonHS(HONSO&);
HONSO Tong2HS(HONSO, HONSO);
HONSO Hieu2HS(HONSO, HONSO);
HONSO Thuong2HS(HONSO, HONSO);
HONSO Tich2HS(HONSO, HONSO);
bool ktHSToiGian(HONSO);
void QuiDongMau(HONSO&, HONSO&);
void QuiDongTu(HONSO&, HONSO&);


int main()
{
	cout << endl << "1. Nhap hon so:";
	HONSO M;
	Nhap(M);

	cout << endl << "2. Xuat hon so:";
	Xuat(M);

	cout << endl << "\n3. Rut gon hon so:";
	cout << "\nHon so ban dau:";
	HONSO M1;
	Nhap(M1);
	M1 = RutGonHS(M1);
	cout << "Hon so rut gon:";
	Xuat(M1);

	cout << endl << "\n4. Tong hai hon so:";
	HONSO M2, M3, M23;
	cout << "\nHon so thu nhat:";
	Nhap(M2);
	cout << "Hon so thu hai:";
	Nhap(M3);
	M23 = Tong2HS(M2, M3);
	cout << "Tong: ";
	Xuat(M23);

	cout << endl << "\n5. Hieu hai hon so:";
	HONSO M4, M5, M45;
	cout << "\nHon so thu nhat:";
	Nhap(M4);
	cout << "Hon so thu hai:";
	Nhap(M5);
	M45 = Hieu2HS(M4, M5);
	cout << "Hieu: ";
	Xuat(M45);

	cout << endl << "\n6. Tich hai hon so:";
	HONSO M6, M7, M67;
	cout << "\nHon so thu nhat:";
	Nhap(M6);
	cout << "Hon so thu hai:";
	Nhap(M7);
	M67 = Tich2HS(M6, M7);
	cout << "Tich: ";
	Xuat(M67);

	cout << endl << "\n7. Thuong hai hon so:";
	HONSO M8, M9, M89;
	cout << "\nHon so thu nhat:";
	Nhap(M8);
	cout << "Hon so thu hai:";
	Nhap(M9);
	M89 = Thuong2HS(M8, M9);
	cout << "Thuong: ";
	Xuat(M89);

	cout << endl << "\n8. Kiem tra hon so co toi gian hay khong:";
	HONSO M10;
	cout << "\nHon so ban dau: ";
	Nhap(M10);
	if (ktHSToiGian(M10))
		cout << "Hon so da cho toi gian";
	else
		cout << "Hon so da cho chua toi gian";

	cout << endl << "\n9. Quy dong mau 2 hon so:";
	HONSO M11, M12;
	cout << "\nHon so thu nhat: ";
	Nhap(M11);
	cout << "Hon so thu hai: ";
	Nhap(M12);
	QuiDongMau(M11, M12);

	cout << endl << "\n10. Quy dong tu 2 hon so:";
	HONSO M13, M14;
	cout << "\nHon so thu nhat: ";
	Nhap(M13);
	cout << "Hon so thu hai: ";
	Nhap(M14);
	QuiDongTu(M13, M14);

	return 1;
}

//Bai107
void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

//Bai108
void Xuat(HONSO x)
{
	cout << "\nNguyen = " << x.Nguyen << endl;
	cout << "Tu = " << x.Tu << endl;
	cout << "Mau = " << x.Mau;
}

//Bai109
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}

HONSO RutGonHS(HONSO& x)
{
	HONSO temp;
	int ucln = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / ucln;
	x.Mau = x.Mau / ucln;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;

	temp.Tu = x.Tu;
	temp.Mau = x.Mau;
	temp.Nguyen = x.Nguyen;
	return temp;
}

//Bai110
HONSO Tong2HS(HONSO x, HONSO y)
{
	HONSO z;
	z.Nguyen = x.Nguyen + y.Nguyen;
	z.Tu = x.Tu * y.Mau + x.Mau * y.Tu;
	z.Mau = x.Mau * y.Mau;
	RutGonHS(z);
	return z;
}

//Bai111
HONSO Hieu2HS(HONSO x, HONSO y)
{
	HONSO z;
	z.Nguyen = x.Nguyen - y.Nguyen;
	z.Tu = x.Tu * y.Mau - x.Mau * y.Tu;
	z.Mau = x.Mau * y.Mau;
	RutGonHS(z);
	return z;
}

//Bai112
HONSO Tich2HS(HONSO x, HONSO y)
{
	HONSO z;
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;

	z.Tu = x.Tu * y.Tu;
	z.Mau = x.Mau * y.Mau;
	z.Nguyen = 0;
	RutGonHS(z);
	return z;
}

//Bai113
HONSO Thuong2HS(HONSO x, HONSO y)
{
	HONSO z;
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;

	z.Tu = x.Tu * y.Mau;
	z.Mau = x.Mau * y.Tu;
	z.Nguyen = 0;
	RutGonHS(z);
	return z;
}

//Bai114
bool ktHSToiGian(HONSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1 && x.Tu / x.Mau == 0)
		return true;
	return false;
}

//Bai115
void QuiDongMau(HONSO& x, HONSO& y)
{
	int mau = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mau;
	y.Mau = mau;

	cout << "Qui dong mau hon so thu nhat:";
	Xuat(x);
	cout << "\nQui dong mau hon so thu hai:";
	Xuat(y);
}

//Bai116
void QuiDongTu(HONSO& x, HONSO& y)
{
	int tu = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tu;
	y.Tu = tu;

	cout << "Qui dong tu hon so thu nhat:";
	Xuat(x);
	cout << "\nQui dong tu hon so thu hai:";
	Xuat(y);
}