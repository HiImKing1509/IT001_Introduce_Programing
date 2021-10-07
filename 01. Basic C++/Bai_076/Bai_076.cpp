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
	float s = 1+x;
	float t = x;
	int m = 1;
	int i = 1;
	while (i <= n)
	{
		m = m * 2 * i * (2 * i + 1);
		t = t * x * x;
		s = s + (float)t / m;
		i = i + 1;
	}
	cout << "\nTong la: " << s;
	return 1;
}