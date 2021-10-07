#include <iostream>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float dt = 4 * 3.14 * r * r;
	cout << "\nDien tich xung quanh = " << dt;
	return 1;
}