#include<iostream>
#include<iomanip>
using namespace std;
int TinhAn(int);
int TinhBn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int k1 = TinhAn(n);
	int k2 = TinhBn(n);
	cout << "\nGia tri thu " << n << " cua 2 day da cho la: " << k1 << " va " << k2;
	return 1;
}
int TinhAn(int n)
{
	if (n == 1)
		return 2;;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x * x + 2 * y * y);
}
int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (2 * x * y);
}