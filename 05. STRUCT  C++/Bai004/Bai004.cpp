#include<iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO M;
	Nhap(M);
	cout << "Phan so vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "Tu = " << x.Tu << endl;
	cout << "Mau = " << x.Mau;
}