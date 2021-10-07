#include <iostream>
#include <cmath>
using namespace std;
float TinhAn(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = TinhAn(n);
	cout << "ket qua : " << kq;
}
float TinhAn(int k)
{
	if (k == 1)
		return 2;
	float at = TinhAn(k - 1);
	return (at*at+2)/(2*at);
}