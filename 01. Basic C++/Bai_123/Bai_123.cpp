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
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day la: ";
	cout << "\na(n) = " << ahh;
	cout << "\nb(n) = " << bhh;
	return 1;
}