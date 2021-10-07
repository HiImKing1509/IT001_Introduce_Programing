#include <iostream>
#include <cmath>
using namespace std;
int TongUocNho(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TongUocNho(n);
	cout << "Tong tat ca uoc so nho hon " << n << " cua " << n << " la: " << kq;
	return 1;
}

int TongUocNho(int k)
{
	int s = 0;
	for (int i = 1; i < k; i = i + 1)
	{
		if (k % i == 0)
			s = s + i;
	}
	return s;
}