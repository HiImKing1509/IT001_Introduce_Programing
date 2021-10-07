#include <iostream>
#include <cmath>
using namespace std;
int TonTaiChan(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TonTaiChan(n);
	if (kq == 1)
		cout << "Ton tai gia tri chan";
	else
		cout << "khong ton tai gia tri chan";
	return 1;
}
int TonTaiChan(int k)
{
	int T;
	k = abs(k);
	if (k <= 9)
	{
		if (k % 2 == 0)
			return 1;
		else
			return 0;
	}
	int dv = k % 10;
	if (dv % 2 == 0)
		return 1;
	return TonTaiChan(k/10);
}