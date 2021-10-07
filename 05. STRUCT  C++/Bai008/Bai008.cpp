#include<iostream>
using namespace std;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Xuat(NGAY);

int main()
{
	NGAY M;
	Nhap(M);
	cout << "Ngay vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}
void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam;
}