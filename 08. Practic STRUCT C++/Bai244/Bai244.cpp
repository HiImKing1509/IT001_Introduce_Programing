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


int main()
{
	PHANSO b[100][100];
	int k, l;

	NhapMaTranPhanSo(b, k, l);
	cout << "--> Ma Tran ban dau: " << endl;
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