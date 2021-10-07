#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void NhapMang(SOPHUC[][100], int&, int&);
void XuatMang(SOPHUC[][100], int, int);
int DongTraiDau(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	NhapMang(b, k, l);
	cout << "\n--> Mang ban dau: " << endl;
	XuatMang(b, k, l);

	cout << "\n--> So dong thoa dieu kien: " << DemDong(b, k, l);
	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "\nPhan thuc: ";
	cin >> x.Thuc;
	cout << "Phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << fixed << setprecision(2) << x.Thuc << " + " << x.Ao << "i";
}
void NhapMang(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
			cout << endl;
		}
}
void XuatMang(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}
int DongTraiDau(SOPHUC a[][100], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			return 0;
	return 1;
}
int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (DongTraiDau(a, m, n, i) == 1)
			dem++;
	return dem;
}
