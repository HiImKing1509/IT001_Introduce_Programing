#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&);
float ktTonTai(float, float, float, float, float, float);

int main()
{
	float xA, yA, xB, yB, xC, yC;
	Nhap(xA, yA, xB, yB, xC, yC);
	ktTonTai(xA, yA, xB, yB, xC, yC);

	if (ktTonTai(xA, yA, xB, yB, xC, yC) == 1)
		cout << "A, B, C la ba dinh cua tam giac";
	else
		cout << "A, B, C khong la ba dinh cua tam giac";
	return 1;
}
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC)
{
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
}
float ktTonTai(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	float c = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	if (a + b > c && a + c > b && b + c && a)
		return 1;
	else
		return 0;
}