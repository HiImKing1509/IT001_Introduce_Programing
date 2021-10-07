#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = -2;
	int ahh = 0;
	int i = 2;
	int T = 3;
	int P = 7;
	while (i <= n)
	{
		T = T * 3;
		P = P * 7;
		ahh = 5 * at + 2 * T - 6 * P + 12;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}