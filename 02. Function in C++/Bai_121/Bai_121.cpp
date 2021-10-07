#include <iostream>
#include <cmath>
using namespace std;
int Fibo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Fibo(n);
	cout << "f" << "(" << n << ") = " << kq;
	return 1;
}
int Fibo(int k)
{
	int ftt = 1;
	int ft = 1;
	int fhh;
	for (int i = 2; i <= k; i = i + 1)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
	}
	return fhh;
}
