#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int bt = 1;
	int ahh = 0;
	int bhh = 0;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day la: ";
	cout << "\na(n) = " << ahh;
	cout << "\nb(n) = " << bhh;
	return 1;
}