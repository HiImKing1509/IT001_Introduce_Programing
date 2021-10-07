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
SOPHUC ThucAmAoAm(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	NhapMang(b, k, l);
	cout << "\n--> Mang ban dau: " << endl;
	XuatMang(b, k, l);

	cout << "\n--> So phuc cuoi cung co phan thuc am va phan ao am: ";
	SOPHUC a = ThucAmAoAm(b, k, l);
	Xuat(a);
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
SOPHUC ThucAmAoAm(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i++)
		for (int j = n - 1; j >= 0; j++)
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
				return a[i][j];
	return { 0,0 };
}