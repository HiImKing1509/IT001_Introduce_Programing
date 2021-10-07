#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

struct daily
{
	string MaSo;
	string Ten;
	int DienThoai;
	NGAY NgayNhan;
	string DiaChi;
	string Email;
};
typedef struct daily DAILY;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void Nhap(DAILY&);
void Xuat(DAILY);
void NhapMang(DAILY[], int&);
void XuatMang(DAILY[], int);
void NhapTenDaiLy(DAILY);
DAILY TimDaiLy(DAILY[], int, DAILY&);

int main()
{
	DAILY b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac dai ly ---";
	XuatMang(b, k);

	cout << "\n--> Tim dai ly theo ten: ";
	DAILY t;
	DAILY t1 = TimDaiLy(b, k, t);
	Xuat(t1);

	return 1;
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
void Nhap(DAILY& A)
{
	cout << "\n  + Nhap ma so: ";
	getline(cin, A.MaSo, ' ');
	cout << "  + Nhap ten dai ly: ";
	getline(cin, A.Ten, ' ');
	cout << "  + Nhap SDT: ";
	cin >> A.DienThoai;
	cout << "  + Nhap ngay tiep nhan: ";
	NhapNgay(A.NgayNhan);
	cout << "  + Nhap dia chi: ";
	getline(cin, A.DiaChi, ' ');
	cout << "  + Nhap E-mail: ";
	getline(cin, A.Email, ' ');
}
void Xuat(DAILY A)
{
	cout << "\n  + Ma dai ly: " << A.MaSo;
	cout << "\n  + Ten dai ly: " << A.Ten;
	cout << "\n  + Ngay tiep nhan: ";
	XuatNgay(A.NgayNhan);
	cout << "\n  + So dien thoai: 0" << A.DienThoai;
	cout << "\n  + Ten dia chi: " << A.DiaChi;
	cout << "\n  + E-mail: " << A.Email;
}
void NhapMang(DAILY a[], int& n)
{
	cout << "Nhap so luong dai ly: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Dai ly thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void XuatMang(DAILY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Thong so dai ly " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
void NhapTenDaiLy(DAILY P)
{
	cout << "\n+ Nhap ten dai ly: ";
	cin >> P.Ten;
}
DAILY TimDaiLy(DAILY a[], int n, DAILY& b)
{
	NhapTenDaiLy(b);
	for (int i = 0; i < n; i++)
		if (a[i].Ten == b.Ten)
			return a[i];
	DAILY lc = { 0,0,0,0,0,0 };
	return lc;
}
