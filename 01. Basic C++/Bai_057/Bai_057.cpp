#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	cout << "\nTong cac uoc so nho hon " << n << " cua " << n << " la: " << s;
	return 1;
}