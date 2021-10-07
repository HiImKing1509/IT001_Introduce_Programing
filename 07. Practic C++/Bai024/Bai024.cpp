#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int TichChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so cua " << n << " la: " << TichChuSo(n);
	return 1;
}
int TichChuSo(int k)
{
	k = abs(k);
	if (k <= 9)
		return k;
	return (TichChuSo(k / 10) * (k % 10));
}
