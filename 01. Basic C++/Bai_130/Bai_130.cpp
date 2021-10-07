#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float z;
	cout << "Nhap z: ";
	cin >> z;
	if (x + y > z && x + z > y && y + z > x)
		cout << "\nTon tai tam giac co do dai 3 canh la: " << x << " " << y << " " << z;
	else
		cout << "\nKhong ton tai tam giac co do dai 3 canh la: " << x << " " << y << " " << z;
	return 1;
}