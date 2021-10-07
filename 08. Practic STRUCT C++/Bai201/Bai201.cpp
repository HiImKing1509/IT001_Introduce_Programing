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
void NhapMangPhanSo(PHANSO[], int&);
void XuatPhanSo(PHANSO);
int UCLN(int, int);
PHANSO ToiGianPhanSo(PHANSO);
void XuatMangPhanSo(PHANSO[], int);
PHANSO PhanSoMax(PHANSO[], int);
int SoSanhPhanSo(PHANSO, PHANSO);

int main()
{
	PHANSO b[100];
	int k;

	NhapMangPhanSo(b, k);
	cout << "--> Mang ban dau: " << endl;
	XuatMangPhanSo(b, k);

	cout << "\n--> Phan so lon nhat trong mang: ";
	PHANSO A = PhanSoMax(b, k);
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
void NhapMangPhanSo(PHANSO a[], int& n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so a[" << i << "]:";
		NhapPhanSo(a[i]);
	}
}
void XuatPhanSo(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
	cout << endl;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}
PHANSO ToiGianPhanSo(PHANSO x)
{
	PHANSO temp;
	int uc = UCLN(x.Tu, x.Mau);
	temp.Tu = x.Tu / uc;
	temp.Mau = x.Mau / uc;
	return temp;
}
void XuatMangPhanSo(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].Mau == 0)
		{
			cout << " a[" << i << "] Khong hop le" << endl;
		}
		else
		{
			cout << " a[" << i << "] = ";
			a[i] = ToiGianPhanSo(a[i]);
			XuatPhanSo(a[i]);
		}
	}
}
int SoSanhPhanSo(PHANSO x, PHANSO y)
{
	if (x.Mau != 0 && y.Mau != 0)
	{
		float a = (float)x.Tu / x.Mau;
		float b = (float)y.Tu / y.Mau;
		if (a > b)
			return 1;
		else if (a < b)
			return 2;
	}

	return 0;
}
PHANSO PhanSoMax(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (SoSanhPhanSo(a[i], lc) == 1)
		{
			lc = a[i];
		}
	}
	return lc;
}