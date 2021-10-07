#include <iostream>
using namespace std;
void Nhap(float&);
float Dientich(float);

int main()
{
	float r;
	Nhap(r);

	float dt = Dientich(r);
	cout << "Dien tich duong tron ban kinh " << r << " = " << dt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Dientich(float r)
{
	return 3.14 * r * r;
}