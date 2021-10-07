#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua S(" << n << ") = " << Tinh(n);
	return 1;
}
float Tinh(int k)
{
	if (k == 0)
		return 0;
	return sqrt(2 + Tinh(k - 1));
}