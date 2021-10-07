#include <iostream>
#include <cmath>
using namespace std;
int TichUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TichUocLe(n);
	cout << "Tich tat ca uoc so le cua " << n << " la: " << kq;
	return 1;
}

int TichUocLe(int k)
{
	int t = 1;
	for (int i = 1; i <= k; i = i + 2)
	{
		if (k % i == 0)
			t = t * i;
	}
	return t;
}