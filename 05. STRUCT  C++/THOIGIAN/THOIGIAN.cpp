#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai125
struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
bool ktHopLe(THOIGIAN);
THOIGIAN GiayKeTiep(THOIGIAN);
THOIGIAN GiayTruocDo(THOIGIAN);
int SttGiay(THOIGIAN);
int KhoangCachTg(THOIGIAN, THOIGIAN);
int SoSanhTg(THOIGIAN, THOIGIAN);

int main()
{
	cout << "1. Nhap thoi gian: ";
	THOIGIAN M;
	Nhap(M);

	cout << endl << "2. Xuat thoi gian:";
	Xuat(M);

	cout << endl << "\n3. Kiem tra tinh hop le cua thoi gian:";
	THOIGIAN M1;
	cout << "\nNhap thoi gian:";
	Nhap(M1);
	if (ktHopLe(M1))
		cout << "Thoi gian hop le";
	else
		cout << "Thoi gian khong hop le";

	cout << endl << "\n4. Tim thoi gian o giay ke tiep:";
	THOIGIAN M2, M3;
	cout << "\nNhap thoi gian:";
	Nhap(M2);
	M3 = GiayKeTiep(M2);
	cout << "Thoi gian: ";
	Xuat(M3);

	cout << endl << "\n5. Tim thoi gian o giay truoc do:";
	THOIGIAN M4, M5;
	cout << "\nNhap thoi gian:";
	Nhap(M4);
	M5 = GiayTruocDo(M4);
	cout << "Thoi gian: ";
	Xuat(M5);

	cout << endl << "\n6. Tim thoi so thu tu giay ke tu thoi diem 00:00:00";
	THOIGIAN M6;
	cout << "\nNhap thoi gian:";
	Nhap(M6);
	cout << "So thu tu giay: " << SttGiay(M6);

	cout << endl << "\n7. So sanh hai thoi gian:";
	THOIGIAN M7, M8;
	cout << "\nNhap thoi gian thu nhat:";
	Nhap(M7);
	cout << "Nhap thoi gian thu nhat:";
	Nhap(M8);
	int ss = SoSanhTg(M7, M8);
	if (ss == 1)
		cout << "Thoi gian thu nhat lon hon thoi gian thu hai";
	else if (ss == -1)
		cout << "Thoi gian thu nhat nho hon thoi gian thu hai";
	else if (ss == 0)
		cout << "Hai thoi gian bang nhau";

	cout << endl << "\n8. Khoang cach hai thoi gian:";
	THOIGIAN M9, M10;
	cout << "\nNhap thoi gian thu nhat:";
	Nhap(M9);
	cout << "Nhap thoi gian thu nhat:";
	Nhap(M10);
	cout << "Khoang cach: " << KhoangCachTg(M9, M10) << " giay";

	return 1;
}

//Bai126
void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

//Bai127
void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay;
}

//Bai128
bool ktHopLe(THOIGIAN x)
{
	if (x.Gio >= 0 && x.Gio <= 23 && x.Phut >= 0 && x.Phut <= 59 && x.Giay >= 0 && x.Giay <= 59)
		return true;
	return false;
}

//Bai129
THOIGIAN GiayKeTiep(THOIGIAN x)
{
	x.Giay++;
	if (x.Giay > 59)
	{
		x.Phut++;
		if (x.Phut > 59)
		{
			x.Gio++;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;
		}
		x.Giay = 0;
	}
	return x;
}

//Bai130
THOIGIAN GiayTruocDo(THOIGIAN x)
{
	x.Giay--;
	if (x.Giay < 0)
	{
		x.Phut--;
		if (x.Phut < 0)
		{
			x.Gio--;
			if (x.Gio < 0)
				x.Gio = 23;
			x.Phut = 59;
		}
		x.Giay = 59;
	}
	return x;
}

//Bai131
int SttGiay(THOIGIAN x)
{
	int stt;
	stt = 3600 * x.Gio + 60 * x.Phut + x.Phut;
	return stt;
}

//Bai132
int SoSanhTg(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	if (x.Gio == y.Gio && x.Phut == y.Phut && x.Giay == y.Giay)
		return 0;
}

//Bai133
int KhoangCachTg(THOIGIAN x, THOIGIAN y)
{
	int a = SttGiay(x);
	int b = SttGiay(y);
	return abs(a - b);
}