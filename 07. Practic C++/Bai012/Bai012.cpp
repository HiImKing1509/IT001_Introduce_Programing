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

	cout << "Tong mu 4 cua " << n << " so nguyen duong dau tien: " << Tong(n);
	return 1;
}
int Tong(int k)
{
	if (k == 0)
		return 0;
	return (Tong(k - 1) + k * k * k * k);
}