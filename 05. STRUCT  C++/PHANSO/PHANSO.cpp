#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai087
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
PHANSO RutGonPS(PHANSO&);
PHANSO Tong2PS(PHANSO, PHANSO);
PHANSO Hieu2PS(PHANSO, PHANSO);
PHANSO Tich2PS(PHANSO, PHANSO);
PHANSO Thuong2PS(PHANSO, PHANSO);
bool ktCoNghia(PHANSO);
bool ktToiGian(PHANSO);
bool ktPSDuong(PHANSO);
bool ktPSAm(PHANSO);
void QuiDongMau(PHANSO&, PHANSO&);
void QuiDongTu(PHANSO&, PHANSO&);
int SoSanh2PS(PHANSO&, PHANSO&);
PHANSO operator+(PHANSO, PHANSO);
PHANSO operator-(PHANSO, PHANSO);
PHANSO operator*(PHANSO, PHANSO);
PHANSO operator/(PHANSO, PHANSO);


int main()
{
	cout << endl << "1. Nhap phan so:";
	PHANSO M;
	Nhap(M);

	cout << endl << "2. Xuat phan so:";
	Xuat(M);

	cout << endl << "\n3. Rut gon phan so:";
	PHANSO M1;
	cout << "\nPhan so ban dau: ";
	Nhap(M1);
	M1 = RutGonPS(M1);
	cout << "Phan so sau khi rut gon:";
	Xuat(M1);

	cout << endl << "\n4. Tong 2 phan so:";
	PHANSO M2, M3, M23;
	cout << "\nPhan so thu nhat: ";
	Nhap(M2);
	cout << "Phan so thu hai: ";
	Nhap(M3);
	M23 = Tong2PS(M2, M3);
	cout << "Tong:";
	Xuat(M23);

	cout << endl << "\n5. Hieu 2 phan so:";
	PHANSO M4, M5, M45;
	cout << "\nPhan so thu nhat: ";
	Nhap(M4);
	cout << "Phan so thu hai: ";
	Nhap(M5);
	M45 = Hieu2PS(M4, M5);
	cout << "Hieu:";
	Xuat(M45);

	cout << endl << "\n6. Tich 2 phan so:";
	PHANSO M6, M7, M67;
	cout << "\nPhan so thu nhat: ";
	Nhap(M6);
	cout << "Phan so thu hai: ";
	Nhap(M7);
	M67 = Tich2PS(M6, M7);
	cout << "Tich:";
	Xuat(M67);

	cout << endl << "\n7. Thuong 2 phan so:";
	PHANSO M8, M9, M89;
	cout << "\nPhan so thu nhat: ";
	Nhap(M8);
	cout << "Phan so thu hai: ";
	Nhap(M9);
	M89 = Thuong2PS(M8, M9);
	cout << "Thuong:";
	Xuat(M89);

	cout << endl << "\n8. Kiem tra phan so co nghia hay khong:";
	PHANSO M10;
	cout << "\nPhan so ban dau: ";
	Nhap(M10);
	if (ktCoNghia(M10))
		cout << "Phan so da cho co nghia";
	else
		cout << "Phan so da cho khong co nghia";

	cout << endl << "\n9. Kiem tra phan so co toi gian hay khong:";
	PHANSO M11;
	cout << "\nPhan so ban dau: ";
	Nhap(M11);
	if (ktToiGian(M11))
		cout << "Phan so da cho toi gian";
	else
		cout << "Phan so da cho chua toi gian";

	cout << endl << "\n10. Kiem tra phan so co phai phan so duong hay khong:";
	PHANSO M12;
	cout << "\nPhan so ban dau: ";
	Nhap(M12);
	if (ktPSDuong(M12))
		cout << "Phan so da cho la phan so duong";
	else
		cout << "Phan so da cho khong phai la phan so duong";

	cout << endl << "\n11. Kiem tra phan so co phai phan so am hay khong:";
	PHANSO M13;
	cout << "\nPhan so ban dau: ";
	Nhap(M13);
	if (ktPSAm(M13))
		cout << "Phan so da cho la phan so am";
	else
		cout << "Phan so da cho khong phai la phan so am";

	cout << endl << "\n12. Quy dong mau 2 phan so:";
	PHANSO M14, M15;
	cout << "\nPhan so thu nhat: ";
	Nhap(M14);
	cout << "Phan so thu hai: ";
	Nhap(M15);
	QuiDongMau(M14, M15);

	cout << endl << "\n13. Quy dong tu 2 phan so:";
	PHANSO M16, M17;
	cout << "\nPhan so thu nhat: ";
	Nhap(M16);
	cout << "Phan so thu hai: ";
	Nhap(M17);
	QuiDongTu(M16, M17);

	cout << endl << "\n14. So sanh 2 phan so:";
	PHANSO M18, M19;
	cout << "\nPhan so thu nhat: ";
	Nhap(M18);
	cout << "Phan so thu hai: ";
	Nhap(M19);
	int ss = SoSanh2PS(M18, M19);
	if (ss == 1)
		cout << "Phan so thu nhat lon hon phan so thu hai";
	else if (ss == 2)
		cout << "Phan so thu nhat be hon phan so thu hai";
	else if (ss == 0)
		cout << "Hai phan so bang nhau";

	return 1;
}

//Bai088
void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

//Bai089
void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu << endl;
	cout << "Mau = " << x.Mau;
}

//Bai090
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
PHANSO RutGonPS(PHANSO& x)
{
	PHANSO temp;
	int ucln = UCLN(x.Tu, x.Mau);
	temp.Tu = x.Tu / ucln;
	temp.Mau = x.Mau / ucln;
	return temp;
}

//Bai091
PHANSO Tong2PS(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai092
PHANSO Hieu2PS(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai093
PHANSO Tich2PS(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai094
PHANSO Thuong2PS(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp = RutGonPS(temp);
	return temp;
}

//Bai095
bool ktCoNghia(PHANSO x)
{
	if (x.Mau != 0)
		return true;
	return false;
}

//Bai096
bool ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return true;
	return false;
}

//Bai097
bool ktPSDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return true;
	return false;
}

//Bai098
bool ktPSAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return true;
	return false;
}

//Bai099
void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mau = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mau;
	y.Mau = mau;

	cout << "Qui dong mau phan so thu nhat:";
	Xuat(x);
	cout << "\nQui dong mau phan so thu hai:";
	Xuat(y);
}

//Bai100
void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tu = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tu;
	y.Tu = tu;

	cout << "Qui dong tu phan so thu nhat:";
	Xuat(x);
	cout << "\nQui dong tu phan so thu hai:";
	Xuat(y);
}

//Bai101
int SoSanh2PS(PHANSO& x, PHANSO& y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	else if (a < b)
		return 2;
	else if (a = b)
		return 0;
}

//Bai102
PHANSO operator+(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai103
PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai104
PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGonPS(temp);
	return temp;
}

//Bai105
PHANSO operator/(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp = RutGonPS(temp);
	return temp;
}