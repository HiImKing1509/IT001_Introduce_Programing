#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu "<< n <<" cua day la: " << ahh;
	return 1; 
}