#include <iostream>
#include <cmath>
using namespace std;
int TimK(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int kq = TimK(n-1);
	cout << "ket qua : " << kq;
}
int TimK(int n)
{
	if (n==1)
		return 0;
	return TimK(n / 2) + 1;
}