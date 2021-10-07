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

void Nhap(DIEM&);
void Xuat(DIEM);
void NhapMang(DIEM[], int&);
void XuatMang(DIEM[], int);
float KhoangCach2Diem(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);

int main()
{
	DIEM b[100];
	int k;

	NhapMang(b, k);
	cout << "Mang ban dau la: " << endl;
	XuatMang(b, k);

	cout << "\n--> 2 diem co toa do gan nhau nhat: ";
	DIEM B, C;
	GanNhauNhat(b, k, B, C);
	Xuat(B);
	cout << " va ";
	Xuat(C);

	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << endl;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void NhapMang(DIEM a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Toa do diem a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void XuatMang(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "] = ";
		Xuat(a[i]);
		cout << endl;
	}
}
float KhoangCach2Diem(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach2Diem(a[i], a[j]) < KhoangCach2Diem(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
		}
	}
}