#include <iostream>
#include <cmath>
using namespace std;
int TongChuSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TongChuSo(n);
	cout << "Tong chu so la cua "<<n<<" la: " << kq;
	return 1;
}
int TongChuSo(int k)
{
	int s = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		s = s + dv;
	}
	return s;
}