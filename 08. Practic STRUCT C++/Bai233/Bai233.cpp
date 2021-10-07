#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void NhapMang(NGAY[], int&);
void Xuat(NGAY);
void XuatMang(NGAY[], int);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuNgayTrongNam(NGAY);
int SoThuTuNgayTu111(NGAY);
int KhoangCach2Ngay(NGAY, NGAY);
void XaNhauNhat(NGAY[], int);

int main()
{
	NGAY b[100];
	int k;
	NhapMang(b, k);
	cout << "\n--> Mang ban dau: " << endl;
	XuatMang(b, k);

	cout << "\n--> 2 ngay xa nhau nhat: ";
	XaNhauNhat(b, k);

	return 1;
}
void Nhap(NGAY& x)
{
	cout << "\n + Ngay: ";
	cin >> x.Ngay;
	cout << " + Thang: ";
	cin >> x.Thang;
	cout << " + Nam: ";
	cin >> x.Nam;
	cout << endl;
}
void NhapMang(NGAY a[], int& n)
{
	cout << "Nhap so ngay cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thoi gian a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}
void XuatMang(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		Xuat(a[i]);
		cout << endl;
	}
}
bool ktNhuan(NGAY x)
{
	if (x.Nam % 400 == 0 || (x.Nam % 4 == 0 && x.Nam % 100 != 0))
		return true;
	return false;
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	switch (x.Thang)
	{
	case 1, 3, 5, 7, 8, 10, 12:
		return 31;
		break;
	case 2:
		if (ktNhuan(x))
			return 29;
		else
			return 28;
		break;
	default:
		return 30;
		break;
	}
}
int SoThuTuNgayTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}
int SoThuTuNgayTu111(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return stt + SoThuTuNgayTrongNam(x);
}
int KhoangCach2Ngay(NGAY x, NGAY y)
{
	int a = SoThuTuNgayTu111(x);
	int b = SoThuTuNgayTu111(y);
	return abs(a - b);
}
void XaNhauNhat(NGAY a[], int n)
{
	if (n <= 1)
		return;
	NGAY x = a[0];
	NGAY y = a[1];
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (KhoangCach2Ngay(a[i], a[j]) > KhoangCach2Ngay(x, y)) {
				x = a[i];
				y = a[j];
			}
		}
	}
	Xuat(x);
	cout << " va ";
	Xuat(y);
}