#include <iostream>
#include <cmath>
using namespace std;
float ktTonTai(float&, float&, float&, float&, float&, float&, float&, float&);

int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;

	ktTonTai(xA, yA, xB, yB, xC, yC, xM, yM);
	if (ktTonTai(xA, yA, xB, yB, xC, yC, xM, yM) == 1)
		cout << "M nam trong tam giac ABC";
	else
		cout << "M nam ngoai tam giac ABC";
	return 1;
}
float ktTonTai(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM)
{
	float st = (1 / 2) * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float s1 = (1 / 2) * abs(xM * yA + xA * yB + xB * yM - xA * yM - xM * yB - xB * yA);
	float s2 = (1 / 2) * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float s3 = (1 / 2) * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (st = s1 + s2 + s3)
		return 1;
	else
		return 0;
}

