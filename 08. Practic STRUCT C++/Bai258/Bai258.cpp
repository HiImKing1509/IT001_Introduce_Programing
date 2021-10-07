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

struct ve
{
	string TenPhim;
	int GiaTien;
	THOIGIAN XuatChieu;
	NGAY NgayXem;
};
typedef struct ve VE;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void Nhaptg(THOIGIAN&);
void Xuattg(THOIGIAN);
void Nhap(VE&);
void Xuat(VE);
void NhapMang(VE[], int&);
void XuatMang(VE[], int);
int TongTienVe(VE[], int);
bool NgayTrung(NGAY, NGAY);
void SapXep(VE[], int);

int main()
{
	VE b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac ve phim ---";
	XuatMang(b, k);

	cout << "\n--> Tong tien ve: " << TongTienVe(b, k);

	cout << "\n--> Sap xep tang dan ngay chieu phim: ";
	SapXep(b, k);
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
void Nhap(VE& A)
{
	cout << "\n  + Nhap ten phim: ";
	getline(cin, A.TenPhim, ' ');
	cout << "  + Nhap gia tien: ";
	cin >> A.GiaTien;
	cout << "  + Nhap xuat chieu: ";
	Nhaptg(A.XuatChieu);
	cout << "  + Nhap ngay xem: ";
	NhapNgay(A.NgayXem);
}
void Xuat(VE A)
{
	cout << "\n  + Ten phim: " << A.TenPhim;
	cout << "\n  + Gia tien: " << A.GiaTien;
	cout << "\n  + Xuat chieu: ";
	Xuattg(A.XuatChieu);
	cout << "\n  + Ngay xem: ";
	XuatNgay(A.NgayXem);
}
void NhapMang(VE a[], int& n)
{
	cout << "Nhap so luong ve: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thong so thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n";
	}
}
void XuatMang(VE a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Loai ve " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
int TongTienVe(VE a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s = s + a[i].GiaTien;
	return s;
}
bool NgayTrung(NGAY x, NGAY y)
{
	if (x.Nam == y.Nam && x.Thang == y.Thang && x.Ngay == y.Ngay)
		return true;
	return false;
}
void SapXep(VE a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i].NgayXem.Nam > a[j].NgayXem.Nam)
				swap(a[i], a[j]);
			if (a[i].NgayXem.Nam == a[j].NgayXem.Nam && a[i].NgayXem.Thang > a[j].NgayXem.Thang)
				swap(a[i], a[j]);
			if (a[i].NgayXem.Nam == a[j].NgayXem.Nam && a[i].NgayXem.Thang == a[j].NgayXem.Thang && a[i].NgayXem.Ngay > a[j].NgayXem.Ngay)
				swap(a[i], a[j]);
			if (NgayTrung(a[i].NgayXem, a[j].NgayXem) && a[i].XuatChieu.Gio > a[j].XuatChieu.Gio)
				swap(a[i], a[j]);
			if (NgayTrung(a[i].NgayXem, a[j].NgayXem) && a[i].XuatChieu.Gio == a[j].XuatChieu.Gio && a[i].XuatChieu.Phut > a[j].XuatChieu.Phut)
				swap(a[i], a[j]);
		}
}