#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq1 = TinhAn(n);
	int kq2 = TinhBn(n);

	cout << "a(" << n << ") = " << kq1;
	cout << "\nb(" << n << ") = " << kq2;
}
int TinhAn(int k)
{
	int at = 2;
	int bt = 1;
	int ahh = 0;
	int bhh = 0;
	for (int i = 2; i <= k; i++)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
int TinhBn(int k)
{
	int at = 2;
	int bt = 1;
	int ahh = 0;
	int bhh = 0;
	for (int i = 2; i <= k; i++)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}
