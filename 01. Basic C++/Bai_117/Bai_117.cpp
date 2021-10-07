#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int att = -1;
	int at = 3;
	int T = 2;
	int ahh = 0;
	int i = 2;
	while (i <= n)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}