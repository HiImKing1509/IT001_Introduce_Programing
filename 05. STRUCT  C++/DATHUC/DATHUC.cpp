#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai030
struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
void KhoiTaoRong(DATHUC&);
void DieuChinhBac(DATHUC&);
DATHUC Tong(DATHUC, DATHUC);
DATHUC Hieu(DATHUC, DATHUC);
DATHUC Tich(DATHUC, DATHUC);
DATHUC Thuong(DATHUC, DATHUC);
DATHUC DaoHamCap1(DATHUC);
DATHUC DaoHamCapk(DATHUC, int);
float TinhGiaTri(DATHUC, float);
DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
DATHUC operator/(DATHUC, DATHUC);

int main()
{
	cout << "1. Nhap da thuc: ";
	DATHUC M;
	Nhap(M);

	cout << endl << "2. Xuat da thuc: ";
	Xuat(M);

	cout << endl << "\n3. Dieu chinh bac da thuc cho chinh xac: ";
	DATHUC M1;
	Nhap(M1);
	DieuChinhBac(M1);

	cout << endl << "\n4. Tong hai da thuc: ";
	DATHUC M2, M3, M23;
	cout << "\nDa thuc 1:";
	Nhap(M2);
	cout << "Da thuc 2:";
	Nhap(M3);
	M23 = Tong(M2, M3);
	cout << "Tong:"<<endl;
	DieuChinhBac(M23);

	cout << endl << "\n5. Hieu hai da thuc: ";
	DATHUC M4, M5, M45;
	cout << "\nDa thuc 1:";
	Nhap(M4);
	cout << "Da thuc 2:";
	Nhap(M5);
	M45 = Hieu(M4, M5);
	cout << "Hieu:" << endl;
	DieuChinhBac(M45);

	cout << endl << "\n6. Nhan hai da thuc: ";
	DATHUC M6, M7, M67;
	cout << "\nDa thuc 1:";
	Nhap(M6);
	cout << "Da thuc 2:";
	Nhap(M7);
	M67 = Tich(M6, M7);
	cout << "Tich:" << endl;
	DieuChinhBac(M67);

	cout << endl << "\n7. Thuong hai da thuc: ";
	DATHUC M8, M9, M89;
	cout << "\nDa thuc 1:";
	Nhap(M8);
	cout << "Da thuc 2:";
	Nhap(M9);
	M89 = Thuong(M8, M9);
	cout << "Thuong:" << endl;
	DieuChinhBac(M89);

	cout << endl << "\n8. Dao ham cap 1 cua da thuc: ";
	DATHUC M10;
	Nhap(M10);
	M10 = DaoHamCap1(M10);
	cout << "Ket qua: ";
	DieuChinhBac(M10);

	cout << endl << "\n8. Dao ham cap k cua da thuc: ";
	DATHUC M11;
	int n;
	Nhap(M11);
	cout << "Nhap k: ";
	cin >> n;
	M11 = DaoHamCapk(M11, n);
	cout << "Ket qua: ";
	DieuChinhBac(M11);

	cout << endl << "\n9. Gia tri cua da thuc tai x: ";
	DATHUC M12;
	float s;
	Nhap(M12);
	cout << "Nhap x: ";
	cin >> s;
	cout << "Ket qua: " << TinhGiaTri(M12, s);

	return 1;
}

//Bai031
void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "He so a[" << i << "] = ";
		cin >> f.a[i];
	}
}

//Bai032
void Xuat(DATHUC f)
{
	cout << endl << "f(x) = ";
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(4);
	}
	cout << f.a[0];
}
void KhoiTaoRong(DATHUC& f)
{
	f.n = 0;
	for (int i = 0; i < 100; i++)
		f.a[i] = 0;
}

//Bai033
void DieuChinhBac(DATHUC& f)
{
	cout << "f(x) = ";
	for (int i = f.n; i >= 1; i--)
	{
		if (f.a[i] != 0)
		{
			cout << f.a[i];
			cout << "x^" << i;
			cout << setw(4);
		}
	}
	if (f.a[0] != 0)
	cout << f.a[0];
}

//Bai034
DATHUC Tong(DATHUC f, DATHUC g)
{
	DATHUC h;
	if (f.n > g.n)
	{
		h = f;
		for (int i = 0; i <= g.n; i++)
			h.a[i] = f.a[i] + g.a[i];
	}
	else
	{
		h = g;
		for (int i = 0; i <= f.n; i++)
			h.a[i] = f.a[i] + g.a[i];
	}
	return h;
}

//Bai035
DATHUC Hieu(DATHUC f, DATHUC g)
{
	DATHUC h;
	if (f.n > g.n)
	{
		h = f;
		for (int i = 0; i <= g.n; i++)
			h.a[i] = f.a[i] - g.a[i];
	}
	else
	{
		h = g;
		for (int i = h.n; i > f.n; i--)
			h.a[i] = -h.a[i];
		for (int i = 0; i <= f.n; i++)
			h.a[i] = f.a[i] - g.a[i];
	}
	return h;
}

//Bai036
DATHUC Tich(DATHUC f, DATHUC g)
{
	DATHUC h;
	KhoiTaoRong(h);
	h.n = f.n + g.n;
	int i, j;
	for (i = 0; i <= f.n; i++)
	{
		for (j = 0; j <= g.n; j++)
		{
			h.a[i + j] = h.a[i + j] + f.a[i] * g.a[j];

		}
	}
	return h;
}

//Bai037
DATHUC Thuong(DATHUC f, DATHUC g)
{
	DATHUC h;
	KhoiTaoRong(h);
	h.n = f.n - g.n;
	int i, j;
	for (i = 0; i <= f.n; i++)
	{
		for (j = 0; j <= g.n; j++)
		{
			h.a[i + j] = h.a[i + j] - f.a[i] / g.a[j];
		}
	}
	return h;
}

//Bai038 khong lam duoc 

//Bai039
DATHUC DaoHamCap1(DATHUC f)
{
	DATHUC g;
	g = f;
	g.n = f.n - 1;
	for (int i = f.n; i >= 1; i--)
	{
		g.a[i - 1] = f.a[i] * i;
	}
	return g;
}

//Bai040
DATHUC DaoHamCapk(DATHUC f, int k)
{
	DATHUC g;
	g = f;
	for (int i = 0; i < k; i++)
	{
		g = DaoHamCap1(g);
	}
	return g;
}

//Bai041
float TinhGiaTri(DATHUC f, float x)
{
	float kq = 0;
	for (int i = f.n; i >= 0; i--)
		kq = kq + f.a[i] * pow(x, i);
	return kq;
}

//Bai042
DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC h;
	if (f.n > g.n)
	{
		h = f;
		for (int i = 0; i <= g.n; i++)
			h.a[i] = f.a[i] + g.a[i];
	}
	else
	{
		h = g;
		for (int i = 0; i <= f.n; i++)
			h.a[i] = f.a[i] + g.a[i];
	}
	return h;
}

//Bai043
DATHUC operator-(DATHUC f, DATHUC g)
{
	DATHUC h;
	if (f.n > g.n)
	{
		h = f;
		for (int i = 0; i <= g.n; i++)
			h.a[i] = f.a[i] - g.a[i];
	}
	else
	{
		h = g;
		for (int i = h.n; i > f.n; i--)
			h.a[i] = -h.a[i];
		for (int i = 0; i <= f.n; i++)
			h.a[i] = f.a[i] - g.a[i];
	}
	return h;
}

//Bai044
DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC h;
	KhoiTaoRong(h);
	h.n = f.n + g.n;
	int i, j;
	for (i = 0; i <= f.n; i++)
	{
		for (j = 0; j <= g.n; j++)
		{
			h.a[i + j] = h.a[i + j] + f.a[i] * g.a[j];

		}
	}
	return h;
}

//Bai045
DATHUC operator/(DATHUC f, DATHUC g)
{
	DATHUC h;
	KhoiTaoRong(h);
	h.n = f.n - g.n;
	int i, j;
	for (i = 0; i <= f.n; i++)
	{
		for (j = 0; j <= g.n; j++)
		{
			h.a[i + j] = h.a[i + j] - f.a[i] / g.a[j];
		}
	}
	return h;
}

//Bai046 khong lam duoc



