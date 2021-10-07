#include<iostream>
#include<iomanip>
using namespace std;
int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TinhAn(n);
	cout << "\nGia tri thu " << n << " cua day da cho la: " << kq;
	return 1;
}
int TinhAn(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhAn(n - 2);
	return (4 * x + y);
}