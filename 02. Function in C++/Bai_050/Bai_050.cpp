#include <iostream>
#include <cmath>
using namespace std;
int TongUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TongUocSo(n);
	cout << "Tong tat ca uoc so cua " << n << " la: " << kq;
	return 1;
}

int TongUocSo(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i = i + 1)
	{
		if (k % i == 0)
			s = s + i;
	}
	return s;
}