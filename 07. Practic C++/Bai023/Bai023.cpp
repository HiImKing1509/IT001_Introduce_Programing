#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac chu so cua " << n << " la: " << TongChuSo(n);
	return 1;
}
int TongChuSo(int k)
{
	k = abs(k);
	if (k == 0)
		return 0;
	return (TongChuSo(k / 10) + k % 10);
}
