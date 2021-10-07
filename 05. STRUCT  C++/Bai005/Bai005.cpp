#include<iostream>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;
void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO M;
	Nhap(M);
	cout << "Hon so vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(HONSO x)
{
	cout << "Nguyen = " << x.Nguyen << endl;
	cout << "Tu = " << x.Tu << endl;
	cout << "Mau = " << x.Mau;
}