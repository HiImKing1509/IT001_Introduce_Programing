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
void NhapMang(SOPHUC[][100], int&, int&);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	NhapMang(b, k, l);

	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "\nPhan thuc: ";
	cin >> x.Thuc;
	cout << "Phan ao: ";
	cin >> x.Ao;
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
