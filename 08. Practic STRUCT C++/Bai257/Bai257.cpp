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

struct hopsua
{
	string NhanHieu;
	float TrongLuong;
	NGAY HanDung;
};
typedef struct hopsua HOPSUA;
void NhapNgay(NGAY&);
void XuatNgay(NGAY);
void Nhap(HOPSUA&);
void Xuat(HOPSUA);
void NhapMang(HOPSUA[], int&);
void XuatMang(HOPSUA[], int);
int DemQuaHan(HOPSUA[], int, NGAY);
HOPSUA TrongLuongLonNhat(HOPSUA[], int);

int main()
{
	HOPSUA b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac hop sua ---";
	XuatMang(b, k);

	cout << "\n--> Nhap ngay kiem tra: ";
	NGAY d1;
	NhapNgay(d1);
	cout << "Ngay: ";
	XuatNgay(d1);
	cout << "\n--> So hop sua qua han trong mang so voi ngay ";
	XuatNgay(d1);
	cout << ": ";
	cout << DemQuaHan(b, k, d1);

	cout << "\n--> Trong luong hop sua lon nhat: ";
	HOPSUA t = TrongLuongLonNhat(b, k);
	Xuat(t);

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
void Nhap(HOPSUA& A)
{
	cout << "\n  + Nhap nhan hieu: ";
	getline(cin, A.NhanHieu, ' ');
	cout << "  + Nhap trong luong: ";
	cin >> A.TrongLuong;
	cout << "  + Nhap han su dung: ";
	NhapNgay(A.HanDung);
}
void Xuat(HOPSUA A)
{
	cout << "\n  + Nhan sua: " << A.NhanHieu;
	cout << "\n  + Trong luong: " << A.TrongLuong << " ml";
	cout << "\n  + Han dung: ";
	XuatNgay(A.HanDung);

}
void NhapMang(HOPSUA a[], int& n)
{
	cout << "Nhap so luong hop sua: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thong so thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n";
	}
}
void XuatMang(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Loai sua " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
int DemQuaHan(HOPSUA a[], int n, NGAY d)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].HanDung.Nam > d.Nam)
			dem++;
		if (a[i].HanDung.Nam == d.Nam && a[i].HanDung.Thang > d.Thang)
			dem++;
		if (a[i].HanDung.Nam == d.Nam && a[i].HanDung.Thang == d.Thang && a[i].HanDung.Ngay > d.Ngay)
			dem++;
	}
	return dem;
}
HOPSUA TrongLuongLonNhat(HOPSUA a[], int n)
{
	HOPSUA lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].TrongLuong > lc.TrongLuong)
			lc = a[i];
	return lc;
}

