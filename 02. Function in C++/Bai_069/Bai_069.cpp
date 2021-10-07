#include <iostream>
#include <cmath>
using namespace std;
float Tong(float, int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float x;
	cout << "Nhap x: ";
	cin >> x;

	float kq = Tong(x,n);
	cout << "Ket qua = " << kq;
	return 1;
}
float Tong(float m, int k)
{
	float s = 0;
	float t = 1;
	for (int i = 1; i <= k; i++)
	{
		t = t * m;
		s = s + t;
	}
	return s;
}