#include <iostream>
#include <cmath>
using namespace std;
int LonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = LonNhat(n);
	cout << "Chu so lon nhat cua " << n << " la: " << kq;
	return 1;
}
int LonNhat(int k)
{
	int lc = k % 10;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
	}
	return lc;
}