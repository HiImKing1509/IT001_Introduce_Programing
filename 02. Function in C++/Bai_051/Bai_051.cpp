#include <iostream>
#include <cmath>
using namespace std;
int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichUocSo(n);
	cout << "Tich tat ca uoc so cua " << n << " la: " << kq;
	return 1;
}

int TichUocSo(int k)
{
	int t = 1;
	for (int i = 1; i <= k; i = i + 1)
	{
		if (k % i == 0)
			t = t * i;
	}
	return t;
}