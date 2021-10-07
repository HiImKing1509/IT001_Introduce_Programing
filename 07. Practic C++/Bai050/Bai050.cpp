#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TinhAn(n);
	int qk = TinhBn(n);
	cout << "cac gia tri: " << kq << "   " << qk;
	return 0;
}
int TinhAn(int k)
{
	if (k == 1)
		return 1;
	int at = TinhAn(k - 1);
	int bt = TinhBn(k - 1);
	return (3* bt + 2 * at);
}
int TinhBn(int k)
{
	if (k == 1)
		return 1;
	int at = TinhAn(k - 1);
	int bt = TinhBn(k - 1);
	return (at+3*bt);
}