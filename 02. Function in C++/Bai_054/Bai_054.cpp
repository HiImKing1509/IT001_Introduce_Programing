#include <iostream>
#include <cmath>
using namespace std;
int TongUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TongUocChan(n);
	cout << "Tong tat ca uoc so chan cua " << n << " la: " << kq;
	return 1;
}

int TongUocChan(int k)
{
	int s = 0;
	for (int i = 2; i <= k; i = i + 2)
	{
		if (k % i == 0)
			s = s + i;
	}
	return s;
}