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
void NhapDuongTron(DUONGTRON&);
void NhapMang(DUONGTRON[], int&);

int main()
{
	DUONGTRON b[100];
	int k;
	NhapMang(b, k);
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
