#include<iostream>
using namespace std;
float Tinh(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tinh(n);
	cout << "Gia tri bieu thuc can tim la: " << kq;
	return 1;
}
float Tinh(int n)
{
	if (n == 0)
		return 1;
	return 1/(1 + Tinh(n - 1));
}