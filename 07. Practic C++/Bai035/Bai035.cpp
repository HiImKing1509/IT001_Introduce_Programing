#include <iostream>
#include <cmath>
using namespace std;
int UocLeLonNhat(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = UocLeLonNhat(n);
	cout << "ket qua : " << kq;
}
int UocLeLonNhat(int k)
{
	k = abs(k);
	if (k % 2 != 0)
		return k;
	return UocLeLonNhat(k / 2);
}