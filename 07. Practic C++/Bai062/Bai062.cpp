#include <iostream>
#include <cmath>
using namespace std;
float Tinh( int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = Tinh(n);
	cout << "gia tri: " << kq;
	return 0;
}
float Tinh( int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return 1;
	float a = Tinh(k - 1);
	float b = Tinh(k - 2);
	return a + 1 / (k + 1 / (a - b));
}
