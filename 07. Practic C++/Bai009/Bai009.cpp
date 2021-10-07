#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << n << "! = " << GiaiThua(n);
	return 1;
}
int GiaiThua(int k)
{
	if (k == 0)
		return 1;
	return (GiaiThua(k - 1) * k);
}