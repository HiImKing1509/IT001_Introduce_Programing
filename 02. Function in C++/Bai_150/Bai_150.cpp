#include <iostream>
#include <cmath>
using namespace std;
int bcnn(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;

	bcnn(a, b);
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << bcnn(a, b);

	return 1;
}
int bcnn(int k, int i)
{
	int s = k * i;
	while (k * i != 0)
	{
		if (k > i)
			k = k - i;
		else
			i = i - k;
	}
	return s / (k + i);
}