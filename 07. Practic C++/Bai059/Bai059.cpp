#include <iostream>
#include <cmath>
using namespace std;
float Tinh(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = Tinh(x,n);
	cout << "gia tri: " << kq;
	return 0;
}
float Tinh(float x,int k)
{
	if (k == 0)
		return x;
	if (k == 1)
		return x+pow(x,3);
	float at = Tinh(x,k - 1);
	float bt = Tinh(x,k - 2);
	return ((1+x*x)*at - bt*x*x);
}
