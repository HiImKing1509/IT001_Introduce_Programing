#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

struct tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef struct tinh TINH;
void Nhap(TINH&);
void Xuat(TINH);
void NhapMang(TINH[], int&);
void XuatMang(TINH[], int);
void LietKe(TINH[], int);
string DienTichLonNhat(TINH[], int);
void SapXepTinh(TINH[], int);

int main()
{
	TINH b[100];
	int k;
	NhapMang(b, k);
	cout << "--- Danh sach cac tinh ---";
	XuatMang(b, k);

	cout << "\n___________________________________________________";
	cout << "\nCac tinh co dan so tren 1 trieu nguoi: " << endl;
	LietKe(b, k);

	cout << "\n___________________________________________________";
	cout << "\nTinh co dien tich lon nhat: " << DienTichLonNhat(b, k);

	cout << "\n___________________________________________________";
	cout << "\nSap xep tinh theo chieu giam dien tich: ";
	SapXepTinh(b, k);
	XuatMang(b, k);

	return 1;
}
void Nhap(TINH& A)
{
	cout << "\n  + Nhap ma tinh: ";
	cin >> A.MaSo;
	cout << "  + Nhap ten tinh: ";
	getline(cin, A.TenTinh, ' ');
	cout << "  + Nhap dan so: ";
	cin >> A.DanSo;
	cout << "  + Nhap dien tich: ";
	cin >> A.DienTich;
}
void Xuat(TINH A)
{
	cout << "\n + Ma tinh: " << A.MaSo;
	cout << "\n + Ten tinh: " << A.TenTinh;
	cout << "\n + Dan so tinh: " << A.DanSo << " nghin nguoi";
	cout << "\n + Dien tich tinh: " << A.DienTich << " m^2";
}
void NhapMang(TINH a[], int& n)
{
	cout << "Nhap so luong tinh: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thong so thu " << i + 1 << ": ";
		Nhap(a[i]);
		cout << "\n";
	}
}
void XuatMang(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		Xuat(a[i]);
		cout << endl;
	}
}
void LietKe(TINH a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i].DanSo > 1000)
		{
			k++;
			cout << k << ". " << a[i].TenTinh;
			cout << endl;
		}
}
string DienTichLonNhat(TINH a[], int n)
{
	TINH lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].DienTich > lc.DienTich)
			lc = a[i];
	return lc.TenTinh;
}
void SapXepTinh(TINH a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].DienTich < a[j].DienTich)
				swap(a[i], a[j]);
}


