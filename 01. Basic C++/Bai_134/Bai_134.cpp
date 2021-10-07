#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if (x <= y && y <= z)
		cout << "\nBat dang thuc x < = y < = z dung ";
	else
		cout << "\nBat dang thuc x < = y < = z khong dung ";
	return 1;
}
