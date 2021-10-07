#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x5 = x4 * x;
	float x9 = x5 * x4;
	cout << "\nx^9 = " << x9;
	return 1;
}