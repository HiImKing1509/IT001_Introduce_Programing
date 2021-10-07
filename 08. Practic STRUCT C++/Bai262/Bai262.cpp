#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct nhanvien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct nhanvien NHANVIEN;

void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);
void NhapMang(NHANVIEN[], int&);
void XuatMang(NHANVIEN[], int);
NHANVIEN LuongCaoNhat(NHANVIEN[], int);
float TongLuong(NHANVIEN[], int);
void SapXepTang(NHANVIEN[], int);

int main()
{
	NHANVIEN b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac nhan vien ---";
	XuatMang(b, k);

	cout << "\n--> Nhan vien co luong cao nhat: " << endl;
	NHANVIEN a = LuongCaoNhat(b, k);
	Xuat(a);

	cout << "\n--> Tong luong cua cac nhan vien: " << TongLuong(b, k);

	cout << "\n--> Sap xep nhan vien theo luong tang dan: " << endl;
	SapXepTang(b, k);
	XuatMang(b, k);

	return 1;
}
void Nhap(NHANVIEN& A)
{
	cout << "\n  + Nhap ma so: ";
	getline(cin, A.MaSo, ' ');
	cout << "  + Nhap ten nhan vien: ";
	getline(cin, A.HoTen, ' ');
	cout << "  + Nhap luong: ";
	cin >> A.Luong;
}
void Xuat(NHANVIEN A)
{
	cout << "\n  + Ma nhan vien: " << A.MaSo;
	cout << "\n  + Ten nhan vien: " << A.HoTen;
	cout << "\n  + Luong: " << A.Luong << " trieu dong";
}
void NhapMang(NHANVIEN a[], int& n)
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Nhan vien thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void XuatMang(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Thong tin nhan vien " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
NHANVIEN LuongCaoNhat(NHANVIEN a[], int n)
{
	NHANVIEN lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].Luong > lc.Luong)
			lc = a[i];
	return lc;
}
float TongLuong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + a[i].Luong;
	return s;
}
void SapXepTang(NHANVIEN a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Luong > a[j].Luong)
				swap(a[i], a[j]);
}
