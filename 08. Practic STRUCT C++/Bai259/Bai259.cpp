#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct mathang
{
	string TenHang;
	int DonGia;
	int LuongTon;
};
typedef struct mathang MATHANG;

void Nhap(MATHANG&);
void Xuat(MATHANG);
void NhapMang(MATHANG[], int&);
void XuatMang(MATHANG[], int);
MATHANG TonLonNhat(MATHANG[], int);
int DemLuongTon(MATHANG[], int);

int main()
{
	MATHANG b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac mat hang ---";
	XuatMang(b, k);

	cout << "\n--> Mat hang co tong gia tri ton lon nhat: " << endl;
	MATHANG t = TonLonNhat(b, k);
	Xuat(t);

	cout << "\n--> So luong mat hang co so luong ton > 1000: " << DemLuongTon(b, k);

	return 1;
}
void Nhap(MATHANG& A)
{
	cout << "\n  + Nhap ten hang: ";
	getline(cin, A.TenHang, ' ');
	cout << "  + Nhap don gia: ";
	cin >> A.DonGia;
	cout << "  + Nhap so luong ton: ";
	cin >> A.LuongTon;
}
void Xuat(MATHANG A)
{
	cout << "  + Ten hang: " << A.TenHang;
	cout << "\n  + Don gia: " << A.DonGia;
	cout << "\n  + Luong ton: " << A.LuongTon;
}
void NhapMang(MATHANG a[], int& n)
{
	cout << "Nhap so luong mat hang: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thong so thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n";
	}
}
void XuatMang(MATHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Loai hang " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
MATHANG TonLonNhat(MATHANG a[], int n)
{
	MATHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].LuongTon * a[i].DonGia > lc.LuongTon * lc.DonGia)
			lc = a[i];
	return lc;
}
int DemLuongTon(MATHANG a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].LuongTon > 1000)
			dem++;
	return dem;
}
