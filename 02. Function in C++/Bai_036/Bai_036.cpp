#include <iostream>
#include <cmath>
using namespace std;
float LuyThua(float, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = LuyThua(x, n);
	cout << "Ket qua = " << kq;
	return 1;
}

float LuyThua(float y, int k)
{
	float t = 1;
	for (int i = 1; i <= k; i = i + 1)
		t = t * y;
	return t;
}