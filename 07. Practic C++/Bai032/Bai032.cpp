#include <iostream>
#include <cmath>
using namespace std;
int ChuSoDau(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = ChuSoDau(n);
	cout << "ket qua : " << kq;
}
int ChuSoDau(int k)
{
	k = abs(k);
	if (k <= 9)
		return k;
	return ChuSoDau(k / 10);
}