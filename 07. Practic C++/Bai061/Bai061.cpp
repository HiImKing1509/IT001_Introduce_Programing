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
		return x;
	if (n == 1)
		return x + x * x * x;
	float  a = TinhGT(x, n - 1);
	float b = TinhGT(x, n - 2);
	return ((1 + x * x) * a - x * x * b);
}