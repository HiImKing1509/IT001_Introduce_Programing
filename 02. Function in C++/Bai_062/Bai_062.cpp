#include <iostream>
#include <cmath>
using namespace std;
int TongSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TongSoChan(n);
	cout << "Tong cac chu so chan cua " << n << " la: " << kq;
	return 1;
}
int TongSoChan(int k)
{
	int s = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
	}
	return s;
}