#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void NhapDiem(DIEM&);
void XuatDiem(DIEM);
void NhapDuongTron(DUONGTRON&);
void XuatDuongTron(DUONGTRON);
void NhapMang(DUONGTRON[], int&);
void XuatMang(DUONGTRON[], int);
float GanOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	NhapMang(b, k);
	cout << "--> Mang ban dau: " << endl;
	XuatMang(b, k);

	cout << "\n--> Duong tron gan truc Ox nhat: ";
	DUONGTRON c1 = GanOxNhat(b, k);
	XuatDuongTron(c1);

	return 1;
}
void NhapDiem(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
}
void XuatDiem(DIEM P)
{
	cout << fixed << setprecision(2) << "(" << P.x << " , " << P.y << ")";
}
void NhapDuongTron(DUONGTRON& c)
{

	NhapDiem(c.I);
	cout << "R = ";
	cin >> c.R;
	cout << endl;
}
void XuatDuongTron(DUONGTRON c)
{
	cout << "Tam = ";
	XuatDiem(c.I);
	cout << fixed << setprecision(2) << ", R = " << c.R;
}
void NhapMang(DUONGTRON a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "c[" << i << "] co toa do: ";
		NhapDuongTron(a[i]);
	}
}
void XuatMang(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].R > 0)
		{
			cout << "c[" << i << "]: ";
			XuatDuongTron(a[i]);
			cout << endl;
		}
		else
		{
			cout << "c[" << i << "]: ";
			cout << "Khong hop le";
			cout << endl;
		}
	}
}
float GanOx(DUONGTRON c)
{
	return abs(c.I.y - c.R);
}
DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON c2 = a[0];
	for (int i = 1; i < n; i++)
		if (GanOx(a[i]) < GanOx(c2))
			c2 = a[i];
	return c2;
}
