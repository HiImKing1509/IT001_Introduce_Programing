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

struct cauthu
{
	string MaSo;
	string HoTen;
	NGAY NgaySinh;
};
typedef struct cauthu CAUTHU;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void Nhap(CAUTHU&);
void Xuat(CAUTHU);
void NhapMang(CAUTHU[], int&);
void XuatMang(CAUTHU[], int);
CAUTHU TuoiNhoNhat(CAUTHU[], int);
void LietKe(CAUTHU[], int);
void SapXepGiam(CAUTHU[], int);

int main()
{
	CAUTHU b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac cau thu ---";
	XuatMang(b, k);

	cout << "\n--> Cac cau thu nho tuoi nhat trong danh sach: " << endl;
	LietKe(b, k);

	cout << "\n--> Sap xep cac cau thu giam dan theo do tuoi: " << endl;
	SapXepGiam(b, k);
	XuatMang(b, k);

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
void Nhap(CAUTHU& A)
{
	cout << "\n  + Nhap ma so: ";
	getline(cin, A.MaSo, ' ');
	cout << "  + Nhap ten cau thu: ";
	getline(cin, A.HoTen, ' ');
	cout << "  + Nhap ngay sinh: ";
	NhapNgay(A.NgaySinh);
}
void Xuat(CAUTHU A)
{
	cout << "\n  + Ma cau thu: " << A.MaSo;
	cout << "\n  + Ten cau thu: " << A.HoTen;
	cout << "\n  + Ngay sinh: ";
	XuatNgay(A.NgaySinh);
}
void NhapMang(CAUTHU a[], int& n)
{
	cout << "Nhap so luong cau thu: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Cau thu thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void XuatMang(CAUTHU a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Thong so cau thu " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
CAUTHU TuoiNhoNhat(CAUTHU a[], int n)
{
	CAUTHU lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam > lc.NgaySinh.Nam)
			lc = a[i];
	return lc;
}
void LietKe(CAUTHU a[], int n)
{
	CAUTHU lc = TuoiNhoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam == lc.NgaySinh.Nam)
		{
			Xuat(a[i]);
			cout << endl;
		}
}
void SapXepGiam(CAUTHU a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].NgaySinh.Nam < a[j].NgaySinh.Nam)
				swap(a[i], a[j]);
			if (a[i].NgaySinh.Nam == a[j].NgaySinh.Nam && a[i].NgaySinh.Thang < a[j].NgaySinh.Thang)
				swap(a[i], a[j]);
			if (a[i].NgaySinh.Nam == a[j].NgaySinh.Nam && a[i].NgaySinh.Thang == a[j].NgaySinh.Thang && a[i].NgaySinh.Ngay < a[j].NgaySinh.Ngay)
				swap(a[i], a[j]);
		}
}