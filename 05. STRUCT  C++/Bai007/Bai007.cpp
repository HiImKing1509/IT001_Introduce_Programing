#include<iostream>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN M;
	Nhap(M);
	cout << "Thoi gian vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
void Xuat(THOIGIAN x)
{
	cout << "Gio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay;
}