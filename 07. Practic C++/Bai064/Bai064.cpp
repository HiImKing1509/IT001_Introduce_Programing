#include<iostream>
#include<iomanip>
using namespace std;
float TinhGT(float, int);
int main()
{
	int n;
	float x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nNhap x: ";
	cin >> x;
	int kq = TinhGT(x, n);
	cout << "\nGia tri can tim la: " << kq;
	return 1;
}
float TinhGT(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + (float)x * x / 2;
	float  a = TinhGT(x, n - 1);
	float b = TinhGT(x, n - 2);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * a - hs * b);
}