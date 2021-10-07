#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

struct chuyenbay
{
	string MaSo;
	string NoiDi;
	string NoiDen;
	THOIGIAN GioBay;
	NGAY NgayBay;
};
typedef struct chuyenbay CHUYENBAY;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void Nhaptg(THOIGIAN&);
void Xuattg(THOIGIAN);
void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);
void NhapMang(CHUYENBAY[], int&);
void XuatMang(CHUYENBAY[], int);
CHUYENBAY TimNgayNhieuNhat(CHUYENBAY[], int);
CHUYENBAY TimChuyenTheoMa(CHUYENBAY[], int, CHUYENBAY);

int main()
{
	CHUYENBAY b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac chuyen bay ---";
	XuatMang(b, k);

	return 1;
}
void Nhaptg(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
void Xuattg(THOIGIAN x)
{
	cout << "\n + Gio: " << x.Gio << endl;
	cout << " + Phut: " << x.Phut << endl;
	cout << " + Giay: " << x.Giay;
}
void NhapNgay(NGAY& x)
{
	cout << "\n + Ngay: ";
	cin >> x.Ngay;
	cout << " + Thang: ";
	cin >> x.Thang;
	cout << " + Nam: ";
	cin >> x.Nam;
	cout << endl;
}
void XuatNgay(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}
void Nhap(CHUYENBAY& A)
{
	cout << "\n  + Nhap ma chuyen bay: ";
	getline(cin, A.MaSo, ' ');
	cout << "\n  + Nhap noi di: ";
	getline(cin, A.NoiDi, ' ');
	cout << "\n  + Nhap noi den: ";
	getline(cin, A.NoiDen, ' ');
	cout << "  + Nhap ngay bay: ";
	NhapNgay(A.NgayBay);
	cout << "  + Nhap gio bay: ";
	Nhaptg(A.GioBay);
}
void Xuat(CHUYENBAY A)
{
	cout << "\n  + Ma chuyen bay: " << A.MaSo;
	cout << "\n  + Noi di " << A.NoiDi;
	cout << "\n  + Noi den: " << A.NoiDen;
	cout << "\n  + Ngay bay: ";
	XuatNgay(A.NgayBay);
	cout << "\n  + Gio bay: ";
	Xuattg(A.GioBay);
}
void NhapMang(CHUYENBAY a[], int& n)
{
	cout << "Nhap so luong chuyen bay: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thong so thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n";
	}
}
void XuatMang(CHUYENBAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Loai chuyen bay: " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
