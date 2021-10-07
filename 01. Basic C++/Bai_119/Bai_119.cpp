#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	float ahh = 0;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / at / 2;
		at = ahh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}