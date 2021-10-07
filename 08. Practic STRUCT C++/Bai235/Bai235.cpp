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

void NhapDiem(DIEM&);
void XuatDiem(DIEM);
void NhapMaTran(DIEM[][100], int&, int&);
void XuatMaTran(DIEM[][100], int, int);

int main()
{
	DIEM b[100][100];
	int k, l;

	NhapMaTran(b, k, l);
	cout << "--> Ma tran ban dau: " << endl;
	XuatMaTran(b, k, l);

	return 1;
}
void NhapDiem(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << endl;
}
void XuatDiem(DIEM P)
{
	cout << setw(5) << "(" << P.x << "," << P.y << ")";
}
void NhapMaTran(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Toa do a[" << i << "][" << j << "]: ";
			NhapDiem(a[i][j]);
		}
}
void XuatMaTran(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			XuatDiem(a[i][j]);
		}
		cout << endl;
	}
}