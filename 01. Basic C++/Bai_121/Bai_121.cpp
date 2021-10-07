#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ftt = 1;
	int ft = 1;
	int fhh = 0;
	int i = 2;
	while (i <= n)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day la: " << fhh;
	return 1;
}