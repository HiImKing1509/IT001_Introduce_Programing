#include <iostream>
#include <cmath> 
using namespace std;
void Nhap(float&, float&, float&, float& );
float Khoangcach(float, float, float, float );

int main()
{
	float x1, y1, x2, y2;
	Nhap(x1, y1, x2, y2);

	float kc = Khoangcach(x1, y1, x2, y2);
	cout << "Khoang cach = " << kc;
	return 1;
}
void Nhap(float& x1, float& y1, float& x2, float& y2 )
{
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
}
float Khoangcach(float x1, float y1, float x2, float y2 )
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}