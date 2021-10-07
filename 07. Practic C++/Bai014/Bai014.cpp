#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua S(" << n << ") = " << Tong(n);
	return 1;
}
int Tong(int k)
{
	if (k == 0)
		return 0;
	return (Tong(k - 1) + k * (k + 1));
}