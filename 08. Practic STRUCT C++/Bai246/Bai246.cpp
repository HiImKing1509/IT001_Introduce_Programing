#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void NhapPhanSo(PHANSO&);
void NhapMaTranPhanSo(PHANSO[][100], int&, int&);
void XuatPhanSo(PHANSO);
void XuatMaTranPhanSo(PHANSO[][100], int, int);
int SoSanhPhanSo(PHANSO, PHANSO);
PHANSO PhanSoBeNhat(PHANSO[][100], int, int);
int Dem(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;

	NhapMaTranPhanSo(b, k, l);
	cout << "--> Ma Tran ban dau: " << endl;
	XuatMaTranPhanSo(b, k, l);

	cout << "--> Phan so be nhat trong mang: ";
	PHANSO ps = PhanSoBeNhat(b, k, l);
	XuatPhanSo(ps);
	
	cout << "\n--> So luong phan so be nhat trong ma tran: " << Dem(b, k, l);

	return 1;
}
void NhapPhanSo(PHANSO& x)
{
	cout << "\nTu = ";
	cin >> x.Tu;
	cout << "Mau = ";
	cin >> x.Mau;
	if (x.Mau == 0)
		cout << "Phan so khong hop le" << endl;
	cout << endl;
}
void NhapMaTranPhanSo(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Phan so a[" << i << "][" << j << "]: ";
			NhapPhanSo(a[i][j]);
		}
}
void XuatPhanSo(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
	cout << endl;
}
void XuatMaTranPhanSo(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].Mau == 0)
			{
				cout << " a[" << i << "][" << j << "] Khong hop le" << endl;
			}
			else
			{
				cout << " a[" << i << "][" << j << "] = ";
				XuatPhanSo(a[i][j]);
			}
		}
	}
}
int SoSanhPhanSo(PHANSO ps1, PHANSO ps2)
{
	float a = (float)ps1.Tu / ps1.Mau;
	float b = (float)ps2.Tu / ps2.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
PHANSO PhanSoBeNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanhPhanSo(lc, a[i][j]) == 1)
				lc = a[i][j];
	return lc;
}
int Dem(PHANSO a[][100], int m, int n)
{
	int dem = 0;
	PHANSO lc = PhanSoBeNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanhPhanSo(lc, a[i][j]) == 0)
				dem++;
	return dem;
}
