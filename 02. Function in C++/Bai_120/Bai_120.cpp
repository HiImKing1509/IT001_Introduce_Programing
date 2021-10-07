#include <iostream>
#include <cmath>
using namespace std;
float TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = TinhAn(n);
	cout << "a" << "(" << n << ") = " << kq;
	return 1;
}
float TinhAn(int k)
{
	float at = 2;
	float ahh;
	for (int i = 2; i <= k; i = i + 1)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		at = ahh;
	}
	return ahh;
}
