#include <iostream>
#include <cmath>
using namespace std;
int TichChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichChuSo(n);
	cout << "Tich cac chu so cua " << n << " la: " << kq;
	return 1;
}
int TichChuSo(int k)
{
	int T = 1;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		T = T * dv;
	}
	return T;
}