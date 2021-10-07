#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	float r;
	cout << "Nhap r:";
	cin >> r;
	float cv = 2 * n * r * sin(3.14 / n);
	cout << "\nChu vi = " << cv;
	return 1;
}