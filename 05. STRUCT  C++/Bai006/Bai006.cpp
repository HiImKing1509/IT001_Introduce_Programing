#include<iostream>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC M;
	Nhap(M);
	cout << "So phuc vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap so thuc: ";
	cin >> x.Thuc;
	cout << "Nhap so ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << "So thuc = " << x.Thuc << endl;
	cout << "So ao = " << x.Ao;
}