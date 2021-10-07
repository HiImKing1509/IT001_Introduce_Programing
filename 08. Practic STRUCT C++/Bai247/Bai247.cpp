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
bool ktPhanSoAm(PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;

	NhapMaTranPhanSo(b, k, l);
	cout << "--> Ma Tran ban dau: " << endl;
	XuatMaTranPhanSo(b, k, l);

	cout << "\nPhan so am lon nhat trong ma tran: ";
	PHANSO A = AmLonNhat(b, k, l);
	XuatPhanSo(A);

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
bool ktPhanSoAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return true;
	return false;
}
PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktPhanSoAm(a[i][j]))
				if (SoSanhPhanSo(lc, temp) == 0 || SoSanhPhanSo(a[i][j], lc) == 1)
					lc = a[i][j];
	return lc;
}
