#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TinhAn(n);
	cout << "gia tri: " << kq;
	return 0;
}
int TinhAn(int k)
{
	if (k == 0)
		return -1;
	if (k == 1)
		return 3;
	int at = TinhAn(k - 1);
	int bt = TinhAn(k - 2);
	return (5 * at - bt);
}
