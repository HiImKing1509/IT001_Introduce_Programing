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
float DienTichTamGiac(DIEM, DIEM, DIEM);
int ktNamTrong(DIEM, DIEM, DIEM, DIEM);
void TamGiacDocLap(DIEM[], int);

int main()
{
	DIEM b[100];
	int k;

	NhapMang(b, k);
	cout << "Mang ban dau la: " << endl;
	XuatMang(b, k);

	cout << "\n--> Tam giac doc lap co toa do: " << endl;
	TamGiacDocLap(b, k);

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
float DienTichTamGiac(DIEM A, DIEM B, DIEM C)
{
	float a = KhoangCach2Diem(A, B);
	float b = KhoangCach2Diem(A, C);
	float c = KhoangCach2Diem(B, C);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int ktNamTrong(DIEM A, DIEM B, DIEM C, DIEM I)
{
	float s1 = DienTichTamGiac(A, B, I);
	float s2 = DienTichTamGiac(A, C, I);
	float s3 = DienTichTamGiac(B, C, I);
	float s = DienTichTamGiac(A, B, C);
	if (s1 + s2 + s3 == s)
		return 1;
	return 0;
}
void TamGiacDocLap(DIEM a[], int n)
{
	if (n <= 3)
		cout << "So diem khong hop le ";
	else
	{
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = i + 1; j < n - 1; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					int flag = 1;
					for (int t = 0; t != i && t != j && t != k; t++)
					{
						if (ktNamTrong(a[i], a[j], a[k], a[t]) == 1)
							flag = 0;
					}
					if (flag == 1)
						cout << "\nBo 3 diem: ";
					Xuat(a[i]);
					Xuat(a[j]);
					Xuat(a[k]);
					cout << endl;
				}
			}
		}
	}
}