#include <iostream>
#include <cmath>
using namespace std;
int TongSoChan(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TongSoChan(n);
	cout << "ket qua : " << kq;
	return 1;
}
int TongSoChan(int k)
{
	int S;
	k = abs(k);
	if (k <= 9)
	{
		if (k % 2 == 0)
			return k;
		else
			return 0;
	}
	S = TongSoChan(k / 10);
	int dv = k % 10;
	if (dv % 2 == 0)
		return S+dv;
	return S;
}