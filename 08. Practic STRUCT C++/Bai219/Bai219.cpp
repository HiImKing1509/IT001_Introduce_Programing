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
float KhoangCach2Diem(DIEM, DIEM);
int ViTriTuongDoi(DUONGTRON, DUONGTRON);
void LietKeTiepXuc(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	NhapMang(b, k);
	cout << "--> Mang ban dau: " << endl;
	XuatMang(b, k);

	cout << "\n--> Cac duong tron tiep xuc nhau: ";
	LietKeTiepXuc(b, k);
	cout << endl;

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
float KhoangCach2Diem(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int ViTriTuongDoi(DUONGTRON a, DUONGTRON b)
{
	float kc = KhoangCach2Diem(a.I, b.I);
	if (kc == 0 && a.R == b.R)
		return 0;
	if ((a.R + b.R) < kc)
		return 1;
	if ((a.R + b.R) == kc)
		return 2;
	if (a.R + b.R > kc && kc > abs(a.R - b.R))
		return 3;
	if (kc == abs(a.R - b.R))
		return 4;
	return 5;
}
void LietKeTiepXuc(DUONGTRON a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ViTriTuongDoi(a[i], a[j]) == 2 || ViTriTuongDoi(a[i], a[j]) == 4)
			{
				cout << endl;
				XuatDuongTron(a[i]);
				cout << " va ";
				XuatDuongTron(a[j]);
			}

}