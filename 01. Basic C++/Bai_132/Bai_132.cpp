#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM, st, s1, s2, s3;
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
	st = (1 / 2) * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	s1 = (1 / 2) * abs(xM * yA + xA * yB + xB * yM - xA * yM - xM * yB - xB * yA);
	s2 = (1 / 2) * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	s3 = (1 / 2) * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (st = s1 + s2 + s3)
		cout << "\nM nam trong tam giac ABC";
	else
		cout << "\nM nam ngoai tam giac ABC";
	return 1;
}
	