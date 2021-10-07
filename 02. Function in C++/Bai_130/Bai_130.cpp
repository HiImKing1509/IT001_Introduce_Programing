#include <iostream>
using namespace std;
float ktTonTai(float&, float&, float&);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;

	ktTonTai(x, y, z);
	if (ktTonTai(x, y, z) == 1)
		cout << "Ton tai tam giac co do dai ba canh la " << x << ", " << y << ", " << z;
	else
		cout << "Khong ton tai tam giac co do dai ba canh la " << x << ", " << y << ", " << z;
	return 1;
}
float ktTonTai(float& x, float& y, float& z)
{
	if (x + y > z && x + z > y && y + z > x)
		return 1;
	else
		return 0;
}
