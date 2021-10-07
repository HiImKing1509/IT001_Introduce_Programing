#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//Bai171
struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
bool ktNhuan(NGAY);
int SoNgayTrongThang(NGAY);
int SoNgayTrongNam(NGAY);
bool ktNgay(NGAY);
int SoSanhNgay(NGAY, NGAY);
int SttNgay(NGAY);
int SttNgay1(NGAY);
void Thu(NGAY);
int Kc2Ngay(NGAY, NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay2(int);
NGAY NgayKeTiep(NGAY);
NGAY NgayTruocDo(NGAY);
NGAY NgayKeTiepkNgay(NGAY,int);
NGAY NgayTruocDokNgay(NGAY,int);

int main()
{
	cout << "1. Nhap ngay:";
	NGAY M;
	Nhap(M);

	cout << endl << "2. Xuat ngay:";
	Xuat(M);

	cout << endl << "\n3. Kiem tra mot nam co phai nam nhuan hay khong:";
	NGAY M1;
	Nhap(M1);
	if (ktNhuan(M1))
		cout << "Nam nhuan";
	else
		cout << "Khong phai nam nhuan";

	cout << endl << "\n4. Kiem tra so ngay toi da trong mot thang:";
	NGAY M2;
	Nhap(M2);
	cout << "Thang " << M2.Thang << " co " << SoNgayTrongThang(M2) << " ngay";

	cout << endl << "\n5. Kiem tra so ngay toi da trong mot nam:";
	NGAY M3;
	Nhap(M3);
	cout << "Nam " << M3.Nam << " co " << SoNgayTrongNam(M3) << " ngay";

	cout << endl << "\n6. Kiem tra tinh hop le cua mot ngay:";
	NGAY M4;
	Nhap(M4);
	if (ktNgay(M4))
		cout << "Ngay hop le";
	else
		cout << "Ngay khong hop le";

	cout << endl << "\n7. So sanh 2 ngay:";
	NGAY M5, M6;
	cout << "\nNgay thu nhat:";
	Nhap(M5);
	cout << "Ngay thu hai:";
	Nhap(M6);
	int ss = SoSanhNgay(M5, M6);
	if (ss == 1)
		cout << "Ngay thu nhat lon hon";
	else if (ss == 2)
		cout << "Ngay thu hai lon hon";
	else if (ss == 0)
		cout << "Hai ngay bang nhau";

	cout << endl << "\n8. So thu tu ngay trong nam:";
	NGAY M7;
	Nhap(M7);
	cout << "Ket qua: " << SttNgay(M7);

	cout << endl << "\n9. So thu tu ngay ke tu ngay 01/01/01:";
	NGAY M8;
	Nhap(M8);
	cout << "Ket qua: " << SttNgay1(M8);

	cout << endl << "\n10. Kiem tra thu cua mot ngay:";
	NGAY M9;
	Nhap(M9);
	cout << "Ngay " << M9.Ngay << "/" << M9.Thang << "/" << M9.Nam << " la: ";
	Thu(M9);

	cout << endl << "\n11. Khoang cach 2 ngay:";
	NGAY M10, M11;
	cout << "\nNgay thu nhat:";
	Nhap(M10);
	cout << "Ngay thu hai:";
	Nhap(M11);
	cout << "Khoang cach: " << Kc2Ngay(M10, M11);

	cout << endl << "\n12. Tim ngay khi biet nam va so thu tu ngay trong nam";
	NGAY M12;
	int m, k;
	cout << "\nNhap nam: ";
	cin >> m;
	cout << "Nhap so thu tu: ";
	cin >> k;
	M12 = TimNgay(m, k);
	cout << "Ngay do la: ";
	Xuat(M12);

	cout << endl << "\n13. Tim ngay khi biet so thu tu ke tu ngay 01/01/01:";
	NGAY M13;
	int k1;
	cout << "\nNhap so thu tu: ";
	cin >> k1;
	M13 = TimNgay2(k1);
	cout << "Ngay do la: ";
	Xuat(M13);

	cout << endl << "\n14. Tim ngay ke tiep:";
	NGAY M14;
	Nhap(M14);
	if (ktNgay(M14))
	{
		cout << "Ngay ke tiep:";
		M14 = NgayKeTiep(M14);
		Xuat(M14);
	}
	else
		cout << "Ngay khong hop le";

	cout << endl << "\n15. Tim ngay truoc do:";
	NGAY M15;
	Nhap(M15);
	if (ktNgay(M15))
	{
		cout << "Ngay truoc do:";
		M15 = NgayTruocDo(M15);
		Xuat(M15);
	}
	else
		cout << "Ngay khong hop le";

	cout << endl << "\n16. Tim ngay ke tiep k ngay:";
	NGAY M16;
	int k2;
	Nhap(M16);
	cout << "Nhap k: ";
	cin >> k2;
	if (ktNgay(M16))
	{
		cout << "Ngay ke tiep " << k2 << " ngay:";
		M16 = NgayKeTiepkNgay(M16, k2);
		Xuat(M16);
	}
	else
		cout << "Ngay khong hop le";

	cout << endl << "\n17. Tim ngay truoc do k ngay:";
	NGAY M17;
	int k3;
	Nhap(M17);
	cout << "Nhap k: ";
	cin >> k3;
	if (ktNgay(M17))
	{
		cout << "Ngay truoc do "<<k3<<" ngay: ";
		M17 = NgayTruocDokNgay(M17,k3);
		Xuat(M17);
	}
	else
		cout << "Ngay khong hop le";

	return 1;
}

//Bai172
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

//Bai173
void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

//Bai174
bool ktNhuan(NGAY x)
{
	if ((x.Nam % 4 == 0 && x.Nam % 100 != 0) || (x.Nam % 400 == 0))
		return true;
	return false;
}

//Bai175
int SoNgayTrongThang(NGAY x)
{
	int t;
	switch (x.Thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			t = 31;
		break;
	case 4: case 6: case 9: case 11:
		t = 30;
		break;
	case 2:
		if (ktNhuan(x))
			t = 29;
		else
			t = 28;
	}
	return t;
}

//Bai176
int SoNgayTrongNam(NGAY x)
{
	if (ktNhuan(x))
		x.Nam = 366;
	x.Nam = 365;
	return x.Nam;
}

//Bai177
bool ktNgay(NGAY x)
{
	if (x.Nam < 1 || x.Thang < 1 || x.Thang > 12 || x.Ngay < 1 || x.Ngay > SoNgayTrongThang(x))
		return false;
	return true;
}

//Bai178
int SoSanhNgay(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return 2;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return 2;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return 2;
	return 0;
}

//Bai179
int SttNgay(NGAY x)
{
	int Stt = x.Ngay;
	for (int i = 1; i < x.Thang; i++)
	{
		switch (i)
		{
		case 4: case 6: case 9: case 11:
			Stt = Stt + 30;
			break;
		case 2:
			if (ktNhuan(x))
				Stt = Stt + 29;
			else
				Stt = Stt + 28;
			break;
		default: Stt = Stt + 31;
		}
	}
	return Stt;
}

//Bai180
int SttNgay1(NGAY x)
{
	int Stt = 0;
	for (int i = 1; i < x.Nam; i++)
	{
		NGAY y = { 1,1,i };
		Stt = Stt + SoNgayTrongNam(y);
	}
	return (Stt + SttNgay(x));
}

//Bai181
void Thu(NGAY x)
{
	int Stt = SttNgay1(x);
	switch (Stt % 7)
	{
	case 0:
		cout << "Chu Nhat";
		break;
	case 1:
		cout << "Thu Hai";
		break;
	case 2:
		cout << "Thu Ba";
		break;
	case 3:
		cout << "Thu Tu";
		break;
	case 4:
		cout << "Thu Nam";
		break;
	case 5:
		cout << "Thu Sau";
		break;
	case 6:
		cout << "Thu Bay";
		break;
	}
}

//Bai182
int Kc2Ngay(NGAY x, NGAY y)
{
	return abs(SttNgay1(x) - SttNgay1(y));
}

//Bai183
NGAY TimNgay(int n, int stt)
{
	NGAY temp = { 1,1,n };
	temp.Thang = 1;
	while ((stt - SoNgayTrongThang(temp)) > 0)
	{
		stt = stt - SoNgayTrongThang(temp);
		temp.Thang = temp.Thang + 1;
	}
	temp.Ngay = stt;
	return temp;
}

//Bai184
NGAY TimNgay2(int stt)
{
	int nam = 1;
	int songay = 365;
	while (stt - songay > 0)
	{
		stt = stt - songay;
		nam++;
		NGAY temp = { 1,1,nam };
		songay = SoNgayTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

//Bai185
NGAY NgayKeTiep(NGAY x)
{
	int stt = SttNgay1(x);
	stt = stt + 1;
	return TimNgay2(stt);
}

//Bai186
NGAY NgayTruocDo(NGAY x)
{
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	int stt = SttNgay1(x);
	stt = stt - 1;
	return TimNgay2(stt);
}

//Bai187
NGAY NgayKeTiepkNgay(NGAY x, int k)
{
	int stt = SttNgay1(x);
	stt = stt + k;
	return TimNgay2(stt);
}

//Bai188
NGAY NgayTruocDokNgay(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = NgayTruocDo(temp);
	return temp;
}
