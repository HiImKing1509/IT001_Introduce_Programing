#include <iostream>
#include <cmath>
using namespace std;
float ktBatDangThuc(float&, float&, float&);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;

	ktBatDangThuc(x, y, z);
	if (ktBatDangThuc(x, y, z) == 1)
		cout << "Bat dang thuc " << x << " < " << y << " < " << z << " la dung";
	else
		cout << "Bat dang thuc " << x << " < " << y << " < " << z << " la khong dung";

	return 1;
}
float ktBatDangThuc(float& x, float& y, float& z)
{
	if (x <= y && y <= z)
		return 1;
	else
		return 0;
}
