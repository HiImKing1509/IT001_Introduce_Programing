#include <iostream>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
    cin >> r;
	float tt = (4 * 3.14 * r * r * r) / 3;
	cout << "\nThe tich hinh cau = " << tt;
	return 1;
}