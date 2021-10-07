#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem + 1;
		i = i + 2;
	}
	cout << "\nSo uoc so chan cua " << n << " la: " << dem;
	return 1;
}