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
void SapTang(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;

	NhapMaTranPhanSo(b, k, l);
	cout << "--> Ma Tran ban dau: " << endl;
	XuatMaTranPhanSo(b, k, l);

	cout << "\n--> Ma tran tang dan: " << endl;
	SapTang(b, k, l);
	XuatMaTranPhanSo(b, k, l);

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
void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = i + 1; j <= m * n - 1; j++)
			if (SoSanhPhanSo(a[i / n][i % n], a[j / n][j % n]) == 1)
				swap(a[i / n][i % n], a[j / n][j % n]);
}
