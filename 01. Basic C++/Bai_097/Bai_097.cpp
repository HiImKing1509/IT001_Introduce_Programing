#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	int m = 1;
	int i = 1;
	while (i <= n)
	{
		m = m * x;
		s = sqrt(m + s);
		i = i + 1;
	}
	cout << "\ns(x,n)= " << s;
	return 1;
}