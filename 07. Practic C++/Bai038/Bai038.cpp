#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = Tinh(n);
	cout << "ket qua : " << kq;
}
float Tinh(int k)
{
	k = abs(k);
	if (k == 1)
		return 0;
	return pow(k+Tinh(k-1),(float)1/k);
}