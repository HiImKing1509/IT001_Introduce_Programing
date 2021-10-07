#include<iostream>
using namespace std;

struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC M;
	Nhap(M);
	cout << "\nDa thuc vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "] = ";
		cin >> f.a[i];
	}
}
void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 0; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << " ";
	}
	cout << f.a[0];
}