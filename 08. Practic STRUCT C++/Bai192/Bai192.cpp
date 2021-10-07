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
DIEM TungDoMax(DIEM[], int);


int main()
{
	DIEM b[100];
	int k;

	NhapMang(b, k);
	cout << "Mang ban dau la: " << endl;
	XuatMang(b, k);

	cout << "\n--> Diem co tung do lon nhat: ";
	DIEM A = TungDoMax(b, k);
	Xuat(A);

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
DIEM TungDoMax(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].y > lc.y)
			lc = a[i];
	}
	return lc;
}
