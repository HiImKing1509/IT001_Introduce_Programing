#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int m = 0;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "\ns(n)= " << s;
	return 1;
}