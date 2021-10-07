#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct hocsinh
{
	string HoTen;
	int Toan;
	int Van;
	float TrungBinh;
};
typedef struct hocsinh HOCSINH;

void Nhap(HOCSINH&);
void Xuat(HOCSINH);
void NhapMang(HOCSINH[], int&);
void XuatMang(HOCSINH[], int);
float DiemTrungBinh(HOCSINH);
int DemHSGioi(HOCSINH[], int);

int main()
{
	HOCSINH b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac hoc sinh ---";
	XuatMang(b, k);

	cout << "\n--> So luong hoc sinh gioi trong danh sach: " << DemHSGioi(b, k);
	return 1;
}
void Nhap(HOCSINH& A)
{
	cout << "\n  + Nhap ten hoc sinh: ";
	getline(cin, A.HoTen, ' ');
	cout << "  + Nhap diem toan: ";
	cin >> A.Toan;
	cout << "  + Nhap diem van: ";
	cin >> A.Van;
}
void Xuat(HOCSINH A)
{
	cout << "\n  + Ten hoc sinh: " << A.HoTen;
	cout << "\n  + Diem toan: " << A.Toan;
	cout << "\n  + Diem van: " << A.Van;
	cout << "\n  + Diem trung binh: " << (A.Van + A.Toan) / 2;
}
void NhapMang(HOCSINH a[], int& n)
{
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Hoc sinh thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void XuatMang(HOCSINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Thong tin hoc sinh " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
float DiemTrungBinh(HOCSINH A)
{
	return (A.Toan + A.Van) / 2;
}
int DemHSGioi(HOCSINH a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i].Toan > 8 && a[i].Van > 8)
			dem++;
	return dem;
}