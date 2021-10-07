#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai047
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float KhoangCachOX(DIEM, DIEM);
float KhoangCachOY(DIEM, DIEM);
float KhoangCachO(DIEM);
DIEM DoiXungGoc(DIEM);
DIEM DoiXungOx(DIEM);
DIEM DoiXungOy(DIEM);
DIEM DoiXungPhanGiac1(DIEM);
DIEM DoiXungPhanGiac2(DIEM);
bool ktTrung(DIEM, DIEM);
bool ktThuocI(DIEM);
bool ktThuocII(DIEM);
bool ktThuocIII(DIEM);
bool ktThuocIV(DIEM);

int main()
{
	cout << "1. Nhap toa do diem trong (Oxy): ";
	DIEM A;
	cout << "\nNhap toa do diem A: ";
	Nhap(A);

	cout << endl << "2. Xuat toa do diem trong (Oxy): ";
	cout << "\nToa do diem A: ";
	Xuat(A);

	cout << endl << "\n3. Khoang cach giua 2 diem: ";
	DIEM C, D;
	cout << "\nNhap toa do diem C: ";
	Nhap(C);
	cout << "Nhap toa do diem D: ";
	Nhap(D);
	float kc = KhoangCach(C, D);
	cout << setw(6) << setprecision(4);
	cout << "Khoang cach: " << kc;

	cout << endl << "\n4. Khoang cach giua 2 diem theo phuong Ox: ";
	DIEM E, F;
	cout << "\nNhap toa do diem E: ";
	Nhap(E);
	cout << "Nhap toa do diem F: ";
	Nhap(F);
	float kcX = KhoangCachOX(E, F);
	cout << setw(6) << setprecision(4);
	cout << "Khoang cach: " << kcX;

	cout << endl << "\n5. Khoang cach giua 2 diem theo phuong Oy: ";
	DIEM G, H;
	cout << "\nNhap toa do diem G: ";
	Nhap(G);
	cout << "Nhap toa do diem H: ";
	Nhap(H);
	float kcY = KhoangCachOY(G, H);
	cout << setw(6) << setprecision(4);
	cout << "Khoang cach: " << kcY;
	
	cout << endl << "\n6. Khoang cach tu diem I toi goc toa do: ";
	DIEM I;
	cout << "\nNhap toa do diem I: ";
	Nhap(I);
	float kcO = KhoangCachO(I);
	cout << setw(6) << setprecision(4);
	cout << "Khoang cach: " << kcO;

	cout << endl << "\n7. Diem doi xung J qua goc toa do: ";
	DIEM J;
	cout << "\nNhap toa do diem J: ";
	Nhap(J);
	J = DoiXungGoc(J);
	cout << "Diem: ";
	Xuat(J);

	cout << endl << "\n8. Diem doi xung voi K qua truc hoanh: ";
	DIEM K;
	cout << "\nNhap toa do diem K: ";
	Nhap(K);
	K = DoiXungOx(K);
	cout << "Diem: ";
	Xuat(K);


	cout << endl << "\n9. Diem doi xung voi L qua truc tung: ";
	DIEM L;
	cout << "\nNhap toa do diem L: ";
	Nhap(L);
	L = DoiXungOy(L);
	cout << "Diem: ";
	Xuat(L);

	cout << endl << "\n10. Diem doi xung voi M qua duong phan giac thu nhat y = x: ";
	DIEM M;
	cout << "\nNhap toa do diem M: ";
	Nhap(M);
	M = DoiXungPhanGiac1(M);
	cout << "Diem: ";
	Xuat(M);

	cout << endl << "\n11. Diem doi xung voi N qua duong phan giac thu hai y = -x: ";
	DIEM N;
	cout << "\nNhap toa do diem N: ";
	Nhap(N);
	N = DoiXungPhanGiac2(N);
	cout << "Diem: ";
	Xuat(N);

	cout << endl << "\n12. Kiem tra 2 diem co trung nhau hay khong: ";
	DIEM A1, B1;
	cout << "\nNhap toa do diem thu nhat: ";
	Nhap(A1);
	cout << "Nhap toa do diem thu hai: ";
	Nhap(B1);
	if (ktTrung(A1, B1))
		cout << "Hai diem da cho trung nhau";
	else
		cout << "Hai diem da cho khong trung nhau";

	cout << endl << "\n13. Kiem tra 1 diem co thuoc goc phan tu thu I hay khong: ";
	DIEM A2;
	cout << "\nNhap toa do diem: ";
	Nhap(A2);
	if (ktThuocI(A2))
		cout << "Diem da cho thuoc goc phan tu thu I";
	else
		cout << "Diem da cho khong thuoc goc phan tu thu I";

	cout << endl << "\n14. Kiem tra 1 diem co thuoc goc phan tu thu II hay khong: ";
	DIEM B2;
	cout << "\nNhap toa do diem: ";
	Nhap(B2);
	if (ktThuocII(B2))
		cout << "Diem da cho thuoc goc phan tu thu II";
	else
		cout << "Diem da cho khong thuoc goc phan tu thu II";

	cout << endl << "\n15. Kiem tra 1 diem co thuoc goc phan tu thu III hay khong: ";
	DIEM A3;
	cout << "\nNhap toa do diem: ";
	Nhap(A3);
	if (ktThuocIII(A3))
		cout << "Diem da cho thuoc goc phan tu thu III";
	else
		cout << "Diem da cho khong thuoc goc phan tu thu III";

	cout << endl << "\n16. Kiem tra 1 diem co thuoc goc phan tu thu IV hay khong: ";
	DIEM B3;
	cout << "\nNhap toa do diem: ";
	Nhap(B3);
	if (ktThuocIV(B3))
		cout << "Diem da cho thuoc goc phan tu thu IV";
	else
		cout << "Diem da cho khong thuoc goc phan tu thu IV";

	return 1;
}

//Bai048
void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

//Bai049
void Xuat(DIEM P)
{
	cout << setw(2);
	cout << setprecision(4);
	cout << "(" << P.x << "," << P.y << ")";
}

//Bai050
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

//Bai051
float KhoangCachOX(DIEM P, DIEM Q)
{
	return abs(P.x - Q.x);
}

//Bai052
float KhoangCachOY(DIEM P, DIEM Q)
{
	return abs(P.y - Q.y);
}

//Bai053
float KhoangCachO(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

//Bai054
DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}

//Bai055
DIEM DoiXungOx(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}

//Bai056
DIEM DoiXungOy(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}

//Bai057
DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}

//Bai058
DIEM DoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}

//Bai059
bool ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return true;
	return false;
}

//Bai060
bool ktThuocI(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return true;
	return false;
}

//Bai061
bool ktThuocII(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		return true;
	return false;
}

//Bai062
bool ktThuocIII(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return true;
	return false;
}

//Bai063
bool ktThuocIV(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return true;
	return false;
}