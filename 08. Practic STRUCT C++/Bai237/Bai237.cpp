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
bool ktTrungNhau(DIEM, DIEM);
int TanSuatTrung(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM b[100][100];
	int k, l;

	NhapMaTran(b, k, l);
	cout << "--> Ma tran ban dau: " << endl;
	XuatMaTran(b, k, l);

	cout << "\n--> Kiem tra tan suat tung voi diem A trong ma tran: ";
	DIEM A;
	NhapDiem(A);
	cout << "Toa do diem A: ";
	XuatDiem(A);
	cout << "\nKet qua: Co " << TanSuatTrung(b, k, l, A) << " gia tri trung diem A";
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
			cout << endl;
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
bool ktTrungNhau(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return true;
	return false;
}
int TanSuatTrung(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrungNhau(a[i][j], P))
				dem++;
	return dem;
}
