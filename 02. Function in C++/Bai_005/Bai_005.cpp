#include <iostream>
using namespace std;
void Nhap(float&);
float Thetich(float);

int main()
{
	float r;
	Nhap(r);

	float tt = Thetich(r);
	cout << "The tich hinh cau ban kinh " << r << " = " << tt;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap r: ";
	cin >> r;
}
float Thetich(float r)
{
	return 4 * 3.14 * r * r * r / 3;
}