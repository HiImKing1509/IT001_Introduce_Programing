#include<iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);


int main()
{
	DIEMKHONGGIAN M;
	Nhap(M);
	cout << "Toa do diem vua nhap: " << endl;
	Xuat(M);
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "x = " << P.x << endl;
	cout << "y = " << P.y << endl;
	cout << "z = " << P.z;
}