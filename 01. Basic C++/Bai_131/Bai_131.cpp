#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if (a + b > c && a + c > b && b + c > a)
		cout << "\n3 diem la dinh cua tam giac";
	else
		cout << "\n3 diem khong la dinh cua tam giac";
	return 1;
}
