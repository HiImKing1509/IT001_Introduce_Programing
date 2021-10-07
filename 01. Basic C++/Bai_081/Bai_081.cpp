#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1 / x;
	float m = x;
	int i = 1;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (float)1 / m;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}