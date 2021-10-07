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


int main()
{
	PHANSO b[100];
	int k;

	NhapMangPhanSo(b, k);
	cout << "--> Mang ban dau: " << endl;
	XuatMangPhanSo(b, k);

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