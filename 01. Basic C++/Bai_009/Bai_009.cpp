#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float dt = n * r * r / 2 * sin(2 * 3.14 / n);
	cout << "\nDien tich =" << dt;
	return 1;
}