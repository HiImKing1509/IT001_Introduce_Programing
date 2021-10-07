#include <iostream>
#include <cmath>
using namespace std;
int ucln(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;

	ucln(a, b);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln(a, b);
	
	return 1;
}
int ucln(int k, int i)
{
	while (k * i != 0)
	{
		if (k > i)
			k = k - i;
		else
			i = i - k;
	}
	return (k + i);
}