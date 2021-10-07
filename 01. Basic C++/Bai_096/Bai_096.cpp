#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int m = 1;
	int i = 1;
	while (i <= n)
	{
		m = m * i;
		s = sqrt(m + s);
		i = i + 1;
	}
	cout << "\ns(n)= " << s;
	return 1;
}