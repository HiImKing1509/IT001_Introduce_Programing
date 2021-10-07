#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void NhapMang(NGAY[], int&);

int main()
{
	NGAY b[100];
	int k;
	NhapMang(b, k);

	return 1;
}
void Nhap(NGAY& x)
{
	cout << "\n + Ngay: ";
	cin >> x.Ngay;
	cout << " + Thang: ";
	cin >> x.Thang;
	cout << " + Nam: ";
	cin >> x.Nam;
	cout << endl;
}
void NhapMang(NGAY a[], int& n)
{
	cout << "Nhap so ngay cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "- Thoi gian a[" << i << "]: ";
		Nhap(a[i]);
	}
}