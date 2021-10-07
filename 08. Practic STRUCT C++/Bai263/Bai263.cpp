#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct thisinh
{
	string MaSo;
	string HoTen;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
typedef struct thisinh THISINH;

void Nhap(THISINH&);
void Xuat(THISINH);
void NhapMang(THISINH[], int&);
void XuatMang(THISINH[], int);
float DiemTong(THISINH);
int ThiDau(THISINH);
void LietKe(THISINH[], int);
void SapXepDiemTong(THISINH[], int);

int main()
{
	THISINH b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac thi sinh ---";
	XuatMang(b, k);

	cout << "\n--> Cac thi sinh thi dau trong danh sach: " << endl;
	LietKe(b, k);

	cout << "\n--> Sap xep diem tong giam dan: " << endl;
	SapXepDiemTong(b, k);
	XuatMang(b, k);

	return 1;
}
void Nhap(THISINH& A)
{
	cout << "\n  + Nhap ma so: ";
	getline(cin, A.MaSo, ' ');
	cout << "  + Nhap ten thi sinh: ";
	getline(cin, A.HoTen, ' ');
	cout << "  + Nhap diem toan: ";
	cin >> A.Toan;
	cout << "  + Nhap diem ly: ";
	cin >> A.Ly;
	cout << "  + Nhap diem hoa: ";
	cin >> A.Hoa;
}
void Xuat(THISINH A)
{
	cout << "\n  + Ma thi sinh: " << A.MaSo;
	cout << "\n  + Ten thi sinh: " << A.HoTen;
	cout << "\n  + Diem toan: " << A.Toan;
	cout << "\n  + Diem ly: " << A.Ly;
	cout << "\n  + Diem hoa: " << A.Hoa;
	cout << "\n  + Diem tong: " << A.Hoa + A.Toan + A.Ly;
}
void NhapMang(THISINH a[], int& n)
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thi sinh thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void XuatMang(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n- Thong tin thi sinh " << i << ": ";
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
float DiemTong(THISINH A)
{
	return A.Toan + A.Hoa + A.Ly;
}
int ThiDau(THISINH A)
{
	if (A.Toan != 0 && A.Ly != 0 && A.Hoa != 0 && DiemTong(A) > 15)
		return 1;
	return 0;
}
void LietKe(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ThiDau(a[i]) == 1)
			Xuat(a[i]);
}
void SapXepDiemTong(THISINH a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Tong < a[j].Tong)
				swap(a[i], a[j]);
}